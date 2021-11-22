#include <iostream>
#include <sstream>
#include <iostream>

class FahrenheitConverter {
   public:
    float celsius           = 0.0f;
    float fahrenheit        = 0.0f;
    float startLowerLimit   = -50.0f;
    float lowerLimit = startLowerLimit;
    float startUpperLimit   = 20.0f;
    float upperLimit = startUpperLimit;
    float scaleStep = 1;

    void convertToFahr() {
        fahrenheit = 32 + int(lowerLimit * 1.8f);
    }
};

    int main() {

    }