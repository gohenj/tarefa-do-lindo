// MainMetodos.cpp

#include <bits/stdc++.h>
#include "Calculadora.h"
#include "VerificadorPalindromo.h"
#include "CalculoFatorial.h"
#include "ConversorTemperatura.h"
using namespace std;

void executarCalculadora();
void executarPalindromo();
void executarCalculoFatorial();
void executarConversorTemp();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
		
	do {
		cout << "\n========== MENU DE EXERC�CIOS ==========" << endl;
		cout << "1. Calculadora Simples" << endl;
        cout << "2. Verificador de Palindromos" << endl;
        cout << "3. Calculo de Fatorial" << endl;
        cout << "4. Conversor de Temperaturas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;
        
        cin.ignore();
        
        switch(escolha) {
        	case 1:
        		executarCalculadora();
        		break;
        	case 2:
        		executarPalindromo();
        		break;
        	case 3:
        		executarCalculoFatorial();
        		break;
        	case 4:
        		executarConversorTemp();
        		break;
        	case 0:
        		cout << "Encerrando o programa. At� mais!" << endl;
        		break;
        	default:
        		cout << "Op��o Inv�lida! Tente novamente." << endl;
        		break;
		}
        
	} while(escolha != 0);
	
	return 0;
}

void executarCalculadora(){
	Calculadora calc;
	double num1, num2;
	char op;
	
	cout << "\n========== Calculadora Simples ==========" << endl;
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "Digite a opera��o (+, -, *, /): ";
	cin >> op;
	cout << "Digite o segundo n�mero: ";
	cin >> num2;
	
	do {
		double resultado;
		switch (op){
			case '+': resultado = calc.somar(num1, num2); break;
            case '-': resultado = calc.subtrair(num1, num2); break;
            case '*': resultado = calc.multiplicar(num1, num2); break;
            case '/': resultado = calc.divisao(num1, num2); break;
            case 0:
        		cout << "Encerrando o programa. At� mais!" << endl;
        		break;
            default:
            	cout << "Opera��o Inv�lida." << endl;
            	return;
		}
		cout << "Resultado: " << num1 << " " << op << " " << num2 << " = " << resultado << endl;
		break;
	} while (op != 0);
}

void executarPalindromo(){
	VerificarPalindromo verif;
	string palavra;
	
	cout << "\n========== Verificador de Pal�ndromos ==========" << endl;
	cout << "Digite uma palavra ou frase: ";
	getline(cin, palavra);
	
	if (verif.palindromo(palavra)){
		cout << "| " << palavra << " | � um pal�ndromo." << endl; 
	} else {
		cout << "| " << palavra << " | n�o � um pal�ndromo." << endl;
	}
}

void executarCalculoFatorial(){
	CalculoFatorial fat;
    int num;

    cout << "\n========== Calculo de Fatorial ==========" << endl;
    cout << "Digite um numero inteiro n�o negativo: ";
    cin >> num;

    long long resultado = fat.calcular(num);

    if (resultado == -1) {
        cout << "Erro: Fatorial n�o � definido para n�meros negativos." << endl;
    } else {
        cout << "O fatorial de " << num << " � " << resultado << endl;
    }
}

void executarConversorTemp(){
	ConversorTemperatura conv;
    int direcao;
    double temp;

    cout << "\n========== Conversor de Temperaturas ==========" << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cout << "Escolha a dire��o da convers�o: ";
    cin >> direcao;

    if (direcao == 1) {
        cout << "Digite a Temperatura em Celsius: ";
        cin >> temp;
        cout << temp << " �C equivale a " << conv.celsiusParaFahrenheit(temp) << " F." << endl;
    } else if (direcao == 2) {
        cout << "Digite a Temperatura em Fahrenheit: ";
        cin >> temp;
        cout << temp << " �F equivale a " << conv.fahrenheitParaCelsius(temp) << " C." << endl;
    } else {
        cout << "Op��o de convers�o invalida." << endl;
    }
}
