#include <iostream>
#include <sstream>
#include <iostream>
class FahrenheitConverter {
public:
    float celsius           = 0.0f;
    float fahrenheit        = 0.0f;
    float startLowerLimit   = -60.0f;
    float lowerLimit = startLowerLimit;
    float startUpperLimit   = 40.0f;
    float upperLimit = startUpperLimit;
    float scaleStep = 1;

    int celsSize    = 0;
    int fahrSize    = 0;
    int celsMaxSize = 0;
    int fahrMaxSize = 0;
    int centerFirstColumn = 25;

    void convertToFah() {
        fahrenheit = 32.0f +(lowerLimit * 1.8f);
    }

    void howManyChar(int cels, int fahr) {
        std::ostringstream getCels;
        getCels << cels;
        std::string celsToString(getCels.str());
        celsSize = celsToString.size();
        if(celsSize > celsMaxSize) {
            celsMaxSize = celsSize -2;
        }

        std::ostringstream getFahr;
        getFahr << fahr;
        std::string fahrToString(getFahr.str());
        fahrSize = fahrToString.size();
        if(fahrSize > fahrMaxSize) {
            fahrMaxSize = fahrSize;
        }
    }

    void countSigns() {
        for(int i = lowerLimit; i <= upperLimit; i += scaleStep) {
            convertToFah();
            celsius = lowerLimit;
            howManyChar(celsius, fahrenheit);
            celsius += scaleStep;
            lowerLimit = celsius;
        }
        celsius    = 0.0f;
        fahrenheit = 0.0f;
        celsSize   = 0;
        fahrSize   = 0;
        lowerLimit = startLowerLimit;
        upperLimit = startUpperLimit;
    }

    void findCenterFirstColumn(int number) {
        if(number < 10) {
           ++centerFirstColumn;
           std::cout << centerFirstColumn;
        } else {
            std::cout << centerFirstColumn;
        }
    }
};

int main() {
    FahrenheitConverter initConvert;
    initConvert.countSigns();

    for (int i = initConvert.lowerLimit; i <= initConvert.upperLimit; i += initConvert.scaleStep) {
        initConvert.convertToFah();
        initConvert.celsius = initConvert.lowerLimit;

        /*initConvert.howManyChar(initConvert.celsius, initConvert.fahrenheit);*/
        //Here you need to enter a cycle for drawing two columns of the table.

        for(int j = 0; j <= 60; ++j) {
            if (initConvert.celsius <= -10) {
                if (j == 20 || j == 30 || j == 40) {
                    std::cout << "|";
                } else if (j == 25) {
                    std::cout << initConvert.celsius;
                }  else if (j == 35) {
                    std::cout << initConvert.fahrenheit;
                } else {
                    std::cout << " ";
                }
            } else if(initConvert.celsius >= -9 && initConvert.celsius < 0) {
                if (j == 20 || j == 31 || j == 40) {
                    std::cout << "|";
                } else if (j == 26) {
                    std::cout << initConvert.celsius;
                } else if (j == 35) {
                    std::cout << initConvert.fahrenheit;
                } else {
                    std::cout << " ";
                }
            } else if(initConvert.celsius >= 0 && initConvert.celsius < 10) {
                if (j == 20 || j == 32 || j == 40) {
                    std::cout << "|";
                } else if (j == 27) {
                    std::cout << initConvert.celsius;
                } else if (j == 35) {
                    std::cout << initConvert.fahrenheit;
                } else {
                    std::cout << " ";
                }
            } else if(initConvert.celsius >= 10) {
                if (j == 20 || j == 31 || j == 40) {
                    std::cout << "|";
                } else if (j == 26) {
                    std::cout << initConvert.celsius;
                } else if (j == 35) {
                    std::cout << initConvert.fahrenheit;
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
        initConvert.lowerLimit += initConvert.scaleStep;
    }
    std::cout << "CelsMaxSize = " << initConvert.celsMaxSize << ", FahrMaxSize = " << initConvert.fahrMaxSize << std::endl;
    initConvert.findCenterFirstColumn(initConvert.celsMaxSize);
    std::cout << std::endl;
}