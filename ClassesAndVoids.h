#ifndef MYCPPTOOLS_CLASSESANDVOIDS_H
#define MYCPPTOOLS_CLASSESANDVOIDS_H
#include <sstream>
#include <string>

class ConsolTable
{
public:
    std::string firstColumnTitle = "Fioiioo";
    std::string secondColumnTitle = "Jii";
    int titleColumn_1Size = firstColumnTitle.size();
    int titleColumn_2Size = secondColumnTitle.size();
    int increaseLine = titleColumn_1Size + titleColumn_2Size - 2;
    int increaseFirstColumn = titleColumn_1Size - 1;

    void getColumn() {
      std::cout << firstColumnTitle << " : " << secondColumnTitle << std::endl;
      std::cout << "Size column_1 title = " << titleColumn_1Size << " ; and size column_2 title = " << titleColumn_2Size << std::endl;
    }

    void createHorisontalLine() {
        ConsolTable initIncreaseLine;
        for (int i = 0; i <= 60 + increaseLine; ++i) {
            if (i >= 20 && i <= 40 + increaseLine) {
                std::cout << "-";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    void createTwoColumn() {

        for (int i = 0; i <= 60; ++i) {
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
    }
    void createFooter() {
        for (int i = 0; i <= 60 + increaseLine; ++i) {
            if ((i > 20 && i < 30 + increaseFirstColumn) || (i > 30 + increaseFirstColumn && i < 40 + increaseLine)) {
                std::cout << "-";
            } else if (i == 30 + increaseFirstColumn) {
                std::cout << "+";
            } else if (i == 20 || i == 40 + increaseLine) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};


#endif //MYCPPTOOLS_CLASSESANDVOIDS_H
