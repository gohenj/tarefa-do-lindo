// Numero.h

#include <iostream>
using namespace std;

class Numero {
public:
    int valor;

    void imprimirValor() {
        cout << "Valor: " << valor << endl;
        cout << "Endereço simulado: " << this << endl; 
    }
};
