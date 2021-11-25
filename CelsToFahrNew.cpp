#include <iostream>

class FahrenheitConverter {
   public:
    float celsius           = 0.0f;
    float fahrenheit        = 0.0f;
    float lowerLimit = 0.0f;
    float upperLimit = 0.0f;
    float scaleStep = 1;

    void convertToFahr() {
        fahrenheit = 32 + int(lowerLimit * 1.8f);
    }

    void takeTheData() {
        std::cout << "Enter the lower limit" << std::endl;
        std::cout << "--->";
        std::cin >> lowerLimit;

        std::cout << "Enter the upper limit" << std::endl;
        std::cout << "--->";
        std::cin >> upperLimit;

        std::cout << "Enter the scale step" << std::endl;
        std::cout << "--->";
        std::cin >> scaleStep;

        std::cout << std::endl;
    }

    void outputOfTwoColumnString(std::string firstColumn, std::string secondColumn) {
        for(int i = 0; i <= 60; ++i) {
            if (i == 25) {
                std::cout << firstColumn;
            } else if (i == 35) {
                std::cout << secondColumn;
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};

    int main() {
        FahrenheitConverter initConvert;
        initConvert.takeTheData();
        initConvert.outputOfTwoColumnString("C", "F");
    }