#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void AssignAge(int* pAge);

void DoubleArray(int* arr, int size);

std::vector<int> Range(int start, int max, int step);

int main()
{
    /*int age = 43;

    AssignAge(&age);
    std::cout << "Pointer age: " << age << "\n";

    int arr[] = { 1,2,3,4 };
    DoubleArray(arr, 4);

    for (int i = 0; i < 4; ++i) {
        std::cout << "Array " << arr[i] << "\n";
    }

    //Problem 1: create a function Range that receives a starting value, a max value and an increment amount
    //between the values, the fuction needs to send back a vector as a return type.

    std::vector<int> range = Range(1, 10, 2);
    for (auto y : range) std::cout << y << "\n";*/

    //Problem 2: use Range function to calculate how compound interest is going to affect an investment
    //Ex. How much to invest: 1000; Interest rate: 8; Value after 10 years: -> print after calculation.

    double investment, interestRate = 0.0;
    std::cout << "How much to invest: ";
    std::cin >> investment;
    std::cout << "Interest rate: ";
    std::cin >> interestRate;

    //converting the number from interestRate into %
    interestRate = interestRate * .01;
    
    for (auto y : Range(1, 10, 1)) {
        investment += (investment * interestRate);
    }

    std::cout << "Value after 10 years: " << investment << "\n";

    return 0;
}

void AssignAge(int* pAge) {
    *pAge = 22;
}

void DoubleArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = arr[i] * 2;
    }
}

std::vector<int> Range(int start, int max, int step) {
    int i = start;
    std::vector<int> range;
    while (i <= max) {
        range.push_back(i);
        i+=step;
    }
    return range;
}