#include <iostream>
#include "ClassesAndVoids.h"
#include <sstream>

int main() {
    ConsolTable initTable;
    initTable.createHorisontalLine();
    initTable.createTwoColumn();
    initTable.createFooter();

   initTable.floatToString();
}
