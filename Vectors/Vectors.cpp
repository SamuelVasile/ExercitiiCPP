#include <vector>
#include <iostream>
#include <string>
#include <sstream>


int main()
{
    /*std::vector<int> vecRandNumbs(2);
    vecRandNumbs[0] = 10;
    vecRandNumbs[1] = 14;
    vecRandNumbs.push_back(30);
    std::cout << "Last index: " << vecRandNumbs[vecRandNumbs.size() - 1] << "\n";

    std::string sSentence = "This is a random sentence.";
    std::vector<std::string> vStr;
    std::stringstream ss(sSentence);
    std::string indivString;
    char cSpaces = ' ';

    while (getline(ss, indivString, cSpaces)) {
        vStr.push_back(indivString);
    }

    for (int i = 0; i < vStr.size(); ++i) {
        std::cout << vStr[i] << "\n";
    }*/

    double dNum1 = 0;
    double dNum2 = 0;
    std::string sCalc = "";
    std::vector<std::string> vecsCalc;
    std::cout << "Enter calculation: ";
    getline(std::cin, sCalc);
    std::stringstream sS(sCalc);
    std::string indivStr;
    char cSpc = ' ';

    while (getline(sS, indivStr, cSpc)) {
        vecsCalc.push_back(indivStr);
    }

    dNum1 = std::stoi(vecsCalc[0]);
    dNum2 = std::stoi(vecsCalc[1]);
    std::string operation = vecsCalc[1];

    if (operation == "+") {
        printf("%.1f + %.1f = %.1f\n", dNum1, dNum2, (dNum1+dNum2));
    }
    else if (operation == "-") {
        printf("%.1f - %.1f = %.1f\n", dNum1, dNum2, (dNum1 - dNum2));
    }
    else if (operation == "/") {
        printf("%.1f / %.1f = %.1f\n", dNum1, dNum2, (dNum1 / dNum2));
    }
    else if(operation == "*") {
        printf("%.1f * %.1f = %.1f\n", dNum1, dNum2, (dNum1 * dNum2));
    }
    else {
        std::cout << "Please enter only these operations: +, -, *, /. \n";
    }

    return 0;
}
