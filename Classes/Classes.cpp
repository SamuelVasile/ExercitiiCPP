// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Animal {
   
private:
    std::string name;
    double height;
    double weight;
    static int numOfAnimals;

public:
    std::string GetName() { return name; }
    void SetName(std::string name) { this->name = name; }
    double GetHeight() { return height; }
    void SetHeight(double height) { this->height = height; }
    double GetWeight() { return weight; }
    void SetWeight(double weight) { this->weight = weight; }

    void SetAll(std::string name, double height, double weight);
    Animal(std::string, double, double);
    Animal();
    ~Animal();
    static int GetNumOfAnimals() { return numOfAnimals; }
    void ToString();
};

int Animal::numOfAnimals = 0;
void Animal::SetAll(std::string name, double height, double weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal() {
    this->name = " ";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal() {
    std::cout << "Animal " << this->name << " was adopted!\n";
}

void Animal::ToString() {
    std::cout << this->name << " is " << this->height << " cm tall and weights " << this->weight << " kg.\n";
}

class Dog : public Animal {
private:
    std::string sound = "Woof";

public:
    void MakeSound() {
        std::cout << "The dog named" << this->GetName() << " says " << this->sound << "\n";
    }

    Dog(std::string name, double height, double weight, std::string sound);
    Dog() : Animal() {};
    void ToString();
};

Dog::Dog(std::string name, double height, double weight, std::string sound): Animal(name, height, weight) {
    this->sound = sound;
}

void Dog::ToString() {
    std::cout << this->GetName() << " is " << this->GetHeight() << " cm tall and weights " <<
        this->GetWeight() << " kg and says " << this->sound << "\n";
}

int main()
{
    Animal fred;
    fred.ToString();
    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("Fred");
    fred.ToString();

    Animal tom("Tom", 34, 14);
    tom.ToString();

    Dog spot("Spot", 40, 20, "Woooof");
    spot.ToString();

    std::cout << "Number of animals is " << Animal::GetNumOfAnimals() << "\n";

    return 0;
}

