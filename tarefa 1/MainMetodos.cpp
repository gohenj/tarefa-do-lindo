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
		cout << "\n========== MENU DE EXERCÍCIOS ==========" << endl;
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
        		cout << "Encerrando o programa. Até mais!" << endl;
        		break;
        	default:
        		cout << "Opção Inválida! Tente novamente." << endl;
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
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite a operação (+, -, *, /): ";
	cin >> op;
	cout << "Digite o segundo número: ";
	cin >> num2;
	
	do {
		double resultado;
		switch (op){
			case '+': resultado = calc.somar(num1, num2); break;
            case '-': resultado = calc.subtrair(num1, num2); break;
            case '*': resultado = calc.multiplicar(num1, num2); break;
            case '/': resultado = calc.divisao(num1, num2); break;
            case 0:
        		cout << "Encerrando o programa. Até mais!" << endl;
        		break;
            default:
            	cout << "Operação Inválida." << endl;
            	return;
		}
		cout << "Resultado: " << num1 << " " << op << " " << num2 << " = " << resultado << endl;
		break;
	} while (op != 0);
}

void executarPalindromo(){
	VerificarPalindromo verif;
	string palavra;
	
	cout << "\n========== Verificador de Palíndromos ==========" << endl;
	cout << "Digite uma palavra ou frase: ";
	getline(cin, palavra);
	
	if (verif.palindromo(palavra)){
		cout << "| " << palavra << " | é um palíndromo." << endl; 
	} else {
		cout << "| " << palavra << " | não é um palíndromo." << endl;
	}
}

void executarCalculoFatorial(){
	CalculoFatorial fat;
    int num;

    cout << "\n========== Calculo de Fatorial ==========" << endl;
    cout << "Digite um numero inteiro não negativo: ";
    cin >> num;

    long long resultado = fat.calcular(num);

    if (resultado == -1) {
        cout << "Erro: Fatorial não é definido para números negativos." << endl;
    } else {
        cout << "O fatorial de " << num << " é " << resultado << endl;
    }
}

void executarConversorTemp(){
	ConversorTemperatura conv;
    int direcao;
    double temp;

    cout << "\n========== Conversor de Temperaturas ==========" << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cout << "Escolha a direção da conversão: ";
    cin >> direcao;

    if (direcao == 1) {
        cout << "Digite a Temperatura em Celsius: ";
        cin >> temp;
        cout << temp << " ºC equivale a " << conv.celsiusParaFahrenheit(temp) << " F." << endl;
    } else if (direcao == 2) {
        cout << "Digite a Temperatura em Fahrenheit: ";
        cin >> temp;
        cout << temp << " ºF equivale a " << conv.fahrenheitParaCelsius(temp) << " C." << endl;
    } else {
        cout << "Opção de conversão invalida." << endl;
    }
}
