// mainMatrizQuadrada.cpp
#include <bits/stdc++.h>
#include "OperacoesMatriz.h"
#include "OperacoesMatrizQuadrada.h"
using namespace std;

void executarOperacoesMatriz();
void executarSomaDiagonais();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcoes;
	
	do {
		cout << "\n==========  MENU PRINCIPAL  ==========" << endl;
		cout << "[1] Maior e Menor Elemento da Matriz" << endl;
		cout << "[2] Soma das Diagonais de Matriz Quadrada" << endl;
		cout << "[0] Sair" << endl;
		cout << "\nEscolha uma opção: ";
		cin >> opcoes;
		
		switch (opcoes){
			case 1:
				executarOperacoesMatriz();
				break;
			case 2:
				executarSomaDiagonais();
				break;
			case 0:
				cout << "Encerrando o Sistema..." << endl;
				break;
			default:
				cout << "Opção Inválida..." << endl;
		}
	} while (opcoes != 0);		
}

void executarOperacoesMatriz(){
	int linhas, colunas;
	cout << "\n========== Maior e Menor Elemento da Matriz ==========" << endl;
	cout << "Digite o número de linhas: ";
	cin >> linhas;
	cout << "Digite o número de colunas: ";
	cin >> colunas;
	
	int** matriz = new int*[linhas];
	for (int i = 0; i < linhas; i++) {
		matriz[i] = new int[colunas];
	}

	cout << "\nDigite os elementos da matriz:" << endl;
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}

	MatrizOperacoes op;
	cout << "Maior elemento: " << op.encontreMaior(matriz, linhas, colunas) << endl;
	cout << "Menor elemento: " << op.encontreMenor(matriz, linhas, colunas) << endl;

	for (int i = 0; i < linhas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
}

void executarSomaDiagonais(){
	int tamanho;
	cout << "\n========== Soma das Diagonais ==========" << endl;
	cout << "Digite a ordem da matriz quadrada: ";
	cin >> tamanho;

	int** matriz = new int*[tamanho];
	for (int i = 0; i < tamanho; i++) {
		matriz[i] = new int[tamanho];
	}

	cout << "\nDigite os elementos da matriz:" << endl;
	for (int i = 0; i < tamanho; i++) {
		for (int j = 0; j < tamanho; j++) {
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	
	MatrizQuadradaOperacoes op;
	cout << "Soma da diagonal principal: " << op.somarDiagonalPrincipal(matriz, tamanho) << endl;
	cout << "Soma da diagonal secundária: " << op.somarDiagonalSegundaria(matriz, tamanho) << endl;

	for (int i = 0; i < tamanho; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
}
