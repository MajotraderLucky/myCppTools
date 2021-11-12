#include <iostream>
#include <sstream>
#include <iostream>
class FahrenheitConverter {
public:
    float celsius      = 0.0f;
    float fahrenheit   = 0.0f;
    float lowerLimit   = -60.0f;
    float upperLimit   = 40.0f;
    float scaleStep    = 1.0f;

    int celsSize    = 0;
    int fahrSize    = 0;
    int celsMaxSize = 0;
    int fahrMaxSize = 0;

    void convertToFah() {
        fahrenheit = 32.0f +(lowerLimit * 1.8f);
    }

    void howManyChar(int cels, int fahr) {
        std::ostringstream getCels;
        getCels << cels;
        std::string celsToString(getCels.str());
        celsSize = celsToString.size();
        if(celsSize > celsMaxSize) {
            celsMaxSize = celsSize;
        }

        std::ostringstream getFahr;
        getFahr << fahr;
        std::string fahrToString(getFahr.str());
        fahrSize = fahrToString.size();
        if(fahrSize > fahrMaxSize) {
            fahrMaxSize = fahrSize;
        }
    }
};

int main() {
    FahrenheitConverter initConvert;

    for (int i = initConvert.lowerLimit; i <= initConvert.upperLimit; i += initConvert.scaleStep) {
        initConvert.convertToFah();
        initConvert.celsius = initConvert.lowerLimit;

        initConvert.howManyChar(initConvert.celsius, initConvert.fahrenheit);
        //Here you need to enter a cycle for drawing two columns of the table.

        for(int j = 0; j <= 60; ++j) {
           if(j == 20 || j == 30 || j == 40) {
               std::cout << "|";
           } else if(j == 25) {
               std::cout << initConvert.celsius;
           } else if(j == 35) {
               std::cout << initConvert.fahrenheit;
           } else {
               std::cout << " ";
           }
        }
        std::cout << std::endl;
        initConvert.lowerLimit += initConvert.scaleStep;
    }
    std::cout << "CelsMaxSize = " << initConvert.celsMaxSize << ", FahrMaxSize = " << initConvert.fahrMaxSize << std::endl;
}