// mainNumero.cpp
#include <iostream>
#include <locale.h>
#include "Numero.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    Numero num;

    cout << "Digite um valor inteiro: ";
    cin >> num.valor;

    num.imprimirValor();

    return 0;
}
