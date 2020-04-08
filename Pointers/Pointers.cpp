#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>

double AddNumbers(double num1, double num2);

void AssignAge(int age);
int AssignAge2(int age);

int main()
{
    //Still VECTOR stuff for beginning :D
    /*std::vector<int> myVec(10);
    std::iota(std::begin(myVec), std::end(myVec), 0);

    for (int i = 0; i < myVec.size(); ++i) {
        std::cout << myVec[i]<<"\n";
    }

    //for (auto y : myVec) std::cout << y << "\n"; additional for loop to go through vec and print all vals

    int val = 8;
    if ((val % 2) == 0) {
        std::cout << " is even number\n";
    }
    else {
        std::cout << " is odd number\n";
    }

    //gen a vector with val 1-10 cycle through it and print the even numbers

    std::vector<int> myVec2(10);
    std::iota(std::begin(myVec2), std::end(myVec2), 1);
    int val2 = 0;

    for (int i = 0; i < myVec2.size(); ++i) {
        val2 = myVec2[i];
        if ((val2 % 2) == 0) {
            std::cout << val2 << "\n";
        }
    }

    //FUNCTIONS!

    double num1, num2;
    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;

    printf("%.1f + %.1f = %.1f", num1, num2, AddNumbers(num1, num2));

    int age = 43;
    AssignAge(age);
    std::cout << "New age assigned is: " << age << "\n"; //this will still print 43 instead of 24 bc age(main)
                                                         //passes the val of 43 in age(AssignAge) and then it's 
                                                         //only changing it to 24 only inside of the function.

    age = AssignAge2(age);
    std::cout << "Returned age assigned is: " << age << "\n";*/

    //POINTERS!
    int age = 43;
    int* pAge=NULL;
    pAge = &age;

    std::cout << "The adress is: " << pAge << "\n";
    std::cout << "The value at adress is: " << *pAge << "\n";

    int intArray[] = { 1,2,3,4,5 };
    int* pIntArray = intArray;
     
    std::cout << "1st: " << *pIntArray << " Adress: " << pIntArray << "\n";
    pIntArray++;
    std::cout << "2nd: " << *pIntArray << " Adress: " << pIntArray << "\n";
    pIntArray++;
    std::cout << "3rd: " << *pIntArray << " Adress: " << pIntArray << "\n";
    pIntArray--;
    std::cout << "2nd: " << *pIntArray << " Adress: " << pIntArray << "\n";
}

/*double AddNumbers(double num1, double num2) {
    return num1 + num2;
}

void AssignAge(int age) {
    age = 24;
}

int AssignAge2(int age); {
    age = 24;
    return age;
}*/