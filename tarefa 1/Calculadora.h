//Calculadora.h
#include <iostream>
using namespace std;

class Calculadora {
	public:
		float somar (float a, float b);
		float subtrair(float a, float b);
		float multiplicar(float a, float b);
		float divisao(float a, float b);
};

float Calculadora::somar(float a, float b){
	return a + b;
}

float Calculadora::subtrair(float a, float b){
	return a - b;
}

float Calculadora::multiplicar(float a, float b){
	return a * b;
}

float Calculadora::divisao(float a, float b){
	if (b == 0){
		cout << "Erro! Divisão por zero não é permitido." << endl;
	}
	return a / b;
}
