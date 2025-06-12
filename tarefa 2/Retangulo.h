
#include <cmath> // Para sqrt e pow

class Retangulo {
private:
    double base;
    double altura;

public:
    Retangulo(double b, double h) {
        base = b;
        altura = h;
    }

    double getArea() {
        return base * altura;
    }

    double getPerimetro() {
        return 2 * (base + altura);
    }

    double getDiagonal() {
        return sqrt(pow(base, 2) + pow(altura, 2));
    }
};



