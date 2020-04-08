// AvengersMK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <math.h>
#include <numeric>

class Warrior {
private:
    int attackMax;
    int blockMax;

public:
    std::string name;
    int health;
    Warrior(std::string name, int health, int attackMax, int blockMax) {
        this->name = name;
        this->health = health;
        this->attackMax = attackMax;
        this->blockMax = blockMax;
    }
   
    int Attack() {
        return std::rand() % this->attackMax;
    }

    int Block() {
        return std::rand() % this->blockMax;
    }
};

class Battle {
public:
    static void StartFight(Warrior& warrior1, Warrior& warrior2) {
        while (true) {
            if (Battle::GetAttackResults(warrior1, warrior2).compare("Game Over") == 0) {
                std::cout << "Game Over\n";
                break;
            }
            if (Battle::GetAttackResults(warrior2, warrior1).compare("Game Over") == 0) {
                std::cout << "Game Over\n";
                break;
            }
        }
    }

    static std::string GetAttackResults(Warrior& warriorA, Warrior& warriorB) {
        int warriorAAttackAmount = warriorA.Attack();
        int warriorBBlockAmount = warriorB.Block();
        int damageToWarriorB = ceil(warriorAAttackAmount - warriorBBlockAmount);
        damageToWarriorB = (damageToWarriorB <= 0) ? 0 : damageToWarriorB;
        warriorB.health = warriorB.health - damageToWarriorB;

        printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damageToWarriorB);
        printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
        if (warriorB.health <= 0) {
            printf("%s has died and %s is victoriuous\n", warriorB.name.c_str(), warriorA.name.c_str());
            return "Game Over";
        }
        else {
            return "Fight Again!";
        }
    }

};

int main()
{
    srand(time(NULL));
    Warrior blackw("BlackWdiow", 100, 30, 15);
    Warrior taskm("Taskmaster", 120, 25, 12);

    Battle::StartFight(blackw, taskm);
}
