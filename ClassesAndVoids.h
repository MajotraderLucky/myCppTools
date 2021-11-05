#ifndef MYCPPTOOLS_CLASSESANDVOIDS_H
#define MYCPPTOOLS_CLASSESANDVOIDS_H
#include <sstream>
#include <string>

class ConsolTable
{
private:
    std::string firstColumnTitle;
    std::string secondColumnTitle;
    int titleColumn_1Size;
    int titleColumn_2Size;

public:
    void setColumn (std::string nameColumn_1, std::string nameColumn_2) {
        firstColumnTitle = nameColumn_1;
        secondColumnTitle = nameColumn_2;
        titleColumn_1Size = firstColumnTitle.size();
        titleColumn_2Size = secondColumnTitle.size();
    }
    void getColumn() {
      std::cout << firstColumnTitle << " : " << secondColumnTitle << std::endl;
      std::cout << "Size column_1 title = " << titleColumn_1Size << " ; and size column_2 title = " << titleColumn_2Size << std::endl;
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
    void createTwoColumn() {
        ConsolTable initVar;
        for (int i = 0; i <= 60; ++i) {
            if (i == 20 || i == 30 || i == 40) {
                std::cout << "|";
            } else if (i == 25) {
                initVar.firstColumnTitle;
            } else if (i == 35) {
                initVar.secondColumnTitle;
            } else {
                std::cout << " ";
            }
        }
    }
};


#endif //MYCPPTOOLS_CLASSESANDVOIDS_H
