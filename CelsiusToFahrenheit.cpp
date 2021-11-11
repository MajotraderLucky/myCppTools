#include <iostream>
class FahrenheitConverter {
public:
    float celsius      = 0.0f;
    float fahrenheit   = 0.0f;
    float lowerLimit   = -60.0f;
    float upperLimit   = 40.0f;
    float scaleStep    = 1.0f;

    void convertToFah() {
        fahrenheit = 32.0f +(lowerLimit * 1.8f);
    }
};

int main() {
    FahrenheitConverter initConvert;

    for (int i = initConvert.lowerLimit; i <= initConvert.upperLimit; i += initConvert.scaleStep) {
        initConvert.convertToFah();
        initConvert.celsius = initConvert.lowerLimit;
        //Here you need to enter a cycle for drawing two columns of the table.
        std::cout << "Celsius = " << initConvert.celsius << ", Fahrenheit = " << initConvert.fahrenheit << std::endl;
        initConvert.lowerLimit += initConvert.scaleStep;
    }
}