#include <iostream>
#include <string>
#include <sstream>

class ConsolTable
{
private:
    std::string firstColumnTitle;
    std::string secondColumnTitle;
public:
    void setColumn (std::string nameColumn_1, std::string nameColumn_2) {
        firstColumnTitle  = nameColumn_1;
        secondColumnTitle = nameColumn_2;
    }
    void getColumn_1() {
        std::cout << firstColumnTitle;
    }
    void getColumn_2() {
        std::cout << secondColumnTitle;
    }

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
        ConsolTable createVar;
        createVar.setColumn("Ki", "F");

        //We need to calculate the length of the first column title.
       int titleFirstColumnSize = createVar.firstColumnTitle.size();

        for (int i = 0; i <= 60; ++i) {
            if (i == 20 || i == 30 || i == 40) {
                std::cout << "|";
            } else if (i == 25) {
               createVar.getColumn_1();
            } else if (i == 35) {
                createVar.getColumn_2();
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

    firstLine.setColumn("P", "O");
    firstLine.createHorisontalLine();
    firstLine.createTwoColomn();
    firstLine.createFooter();






}
