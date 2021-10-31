#include <iostream>

int main() {
    //This program creates a two-column table.
    //Table borders are aligned in the console as the order of numbers increases.
    std::string firstColumnTitle  = "C";
    std::string secondColumnTitle = "F";

    for (int i = 0; i <= 60; i++) {
        if (i > 20 && i < 30 || i > 30 && i < 40) {
            std::cout << "-";
        } else if (i == 20 || i == 30 || i == 40){
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

    for (int i = 0; i <= 60; i++) {
        if (i > 20 && i < 30 || i > 30 && i < 40) {
            std::cout << "-";
        } else if (i == 20 || i == 30 || i == 40){
            std::cout << "|";
        } else {
            std::cout << " ";
        }
    }
}
