#include <iostream>
#include <string>
#include <sstream>

int main() {
    //This program creates a two-column table.
    //Table borders are aligned in the console as the order of numbers increases.
    std::string firstColumnTitle  = "C";
    std::string secondColumnTitle = "F";
    float number1 = 123.222f;
    std::ostringstream ss;
    ss << number1;
    std::string number1ToString(ss.str());
    int number1Size = number1ToString.size() - 1;

    int firstColumnTitleSize  = firstColumnTitle.size()  - 1;
    int secondColumnTitleSize = secondColumnTitle.size() - 1;
    int maxSizeOfSigns = 0;
       if (number1Size > firstColumnTitleSize) {
           maxSizeOfSigns = number1Size;
       }

    for (int i = 0; i <= 60 + maxSizeOfSigns; i++) {
        if (i > 20 && i < (30 + maxSizeOfSigns) || i > (30 + maxSizeOfSigns) && i < 40 + maxSizeOfSigns + secondColumnTitleSize) {
            std::cout << "-";
        } else if (i == 20 || i == 30 + maxSizeOfSigns || i == 40 + maxSizeOfSigns + secondColumnTitleSize){
            std::cout << "|";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i <= 60 + maxSizeOfSigns; i++) {
        if (i == 20 || i == 30 + maxSizeOfSigns || i == 40 + maxSizeOfSigns) {
            std::cout << "|";
        } else if (i == 25 + maxSizeOfSigns) {
            std::cout << firstColumnTitle;
        } else if (i == 35 + maxSizeOfSigns) {
            std::cout << secondColumnTitle;
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i <= 60 + maxSizeOfSigns; i++) {
        if (i > 20 && i < (30 + maxSizeOfSigns) || i > (30 + maxSizeOfSigns) && i < 40 + maxSizeOfSigns + maxSizeOfSigns) {
            std::cout << "-";
        } else if (i == 20 || i == 30 + maxSizeOfSigns || i == 40 + maxSizeOfSigns + secondColumnTitleSize){
            std::cout << "|";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl; //Next, the data output to the columns begins.
    for (int i = 0; i <= 60; i++) {
        if (i == 20 || i == 30 || i == 40) {
            std::cout << "|";
        } else if (i == 25) {
            std::cout << number1;
        } else if (i == 35) {
            std::cout << secondColumnTitle;
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
