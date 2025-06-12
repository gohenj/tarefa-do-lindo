

#include <cmath>

class Circulo {
private:
    double raio;
    const double PI = 3.14159;

public:
    Circulo(double r) {
        raio = r;
    }

    double getArea() {
        return PI * pow(raio, 2);
    }
};

