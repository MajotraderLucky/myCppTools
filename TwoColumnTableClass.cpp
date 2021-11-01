#include <iostream>
#include <string>
#include <sstream>

class ConsolTable
{
public:
    void createHorisontalLine() {
        for (int i = 0; i <= 60; ++i) {
            if (i >= 20 && i <= 40) {
                std::cout << "-";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    void createTwoColomn() {
        for (int i = 0; i <= 60; ++i) {
            if (i == 20 || i == 30 || i == 40) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    void createFooter() {
        for (int i = 0; i <= 60; ++i) {
            if ((i > 20 && i < 30) || (i > 30 && i < 40)) {
                std::cout << "-";
            } else if (i == 30) {
                std::cout << "+";
            } else if (i == 20 || i == 40) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
    }
};

int main() {
    ConsolTable firstLine;
    firstLine.createHorisontalLine();
    firstLine.createTwoColomn();
    firstLine.createFooter();
}
