#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <vector>

int main()
{
    std::string sAge = "0";
    int grade = 0;
    std::cout << "Enter age: ";
    std::getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    if (nAge==5 ) {
        std::cout << "You are in Kindergarten.\n";
    }
    else if (nAge>=6 && nAge<=17 ) {
        grade = nAge - 5;
        std::cout << "You are in grade "<< grade<<", very cool!\n";
    }
    else if(nAge<6){
        std::cout << "You are too young for school!\n";
    }
    else if(nAge>17){
        std::cout << "You are in college.";
    }
    else {
        std::cout << "You finished school. Congratulations!";
    }

    return 0;
}

