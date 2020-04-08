#include <iostream>

int main()
{
    int arrNums[10] = { 1 };
    int arrNums2[] = { 8,9 };
    int arrNums3[5] = { 2,3 };

    std::cout << "1st value is: " << arrNums[0] << "\n";
    std::cout << "1st value is: " << arrNums2[0] << "\n";
    std::cout << "1st value is: " << arrNums3[0] << "\n";

    arrNums3[0] = 7;
    std::cout << "1st value after change is: " << arrNums3[0] << "\n";

    std::cout << "Array size is " << sizeof(arrNums3) / sizeof(*arrNums3) << "\n";

    int arrNums4[2][2][2] = { {{1,2}, {3,4}}, {{5,6},  {7,8}} };
    std::cout << arrNums4[1][1][0];
}