#include <iostream>
#include <string>

int main() {
    //This program creates a two-column table.
    //Table borders are aligned in the console as the order of numbers increases.
    std::string firstColumnTitle  = "CIFA";
    std::string secondColumnTitle = "FAAAAhhhh";

    int firstColumnTitleSize  = firstColumnTitle.size()  - 1;
    int secondColumnTitleSize = secondColumnTitle.size() - 1;

    std::cout << firstColumnTitleSize << std::endl;

    for (int i = 0; i <= 60 + firstColumnTitleSize; i++) {
        if (i > 20 && i < (30 + firstColumnTitleSize) || i > (30 + firstColumnTitleSize) && i < 40 + firstColumnTitleSize + secondColumnTitleSize) {
            std::cout << "-";
        } else if (i == 20 || i == 30 + firstColumnTitleSize || i == 40 + firstColumnTitleSize + secondColumnTitleSize){
            std::cout << "|";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i <= 60; i++) {
        if (i == 20 || i == 30 || i == 40) {
            std::cout << "|";
        } else if (i == 25) {
            std::cout << firstColumnTitle;
        } else if (i == 35) {
            std::cout << secondColumnTitle;
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i <= 60 + firstColumnTitleSize; i++) {
        if (i > 20 && i < (30 + firstColumnTitleSize) || i > (30 + firstColumnTitleSize) && i < 40 + firstColumnTitleSize + secondColumnTitleSize) {
            std::cout << "-";
        } else if (i == 20 || i == 30 + firstColumnTitleSize || i == 40 + firstColumnTitleSize + secondColumnTitleSize){
            std::cout << "|";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
