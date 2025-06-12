// OperacoesMatrizQuadrada.h
#include <iostream>
using namespace std;

class MatrizQuadradaOperacoes {
	public:
		int somarDiagonalPrincipal (int** matriz, int tamanho);
		int somarDiagonalSegundaria (int** matriz, int tamanho);
};

int MatrizQuadradaOperacoes::somarDiagonalPrincipal(int** matriz, int tamanho){
	int soma = 0;
	for (int i=0; i < tamanho; i++){
		soma += matriz[i][i];
	}
	return soma;
}

int MatrizQuadradaOperacoes::somarDiagonalSegundaria(int** matriz, int tamanho){
	int soma = 0;
	for (int i=0; i < tamanho; i++){
		soma += matriz[i][tamanho - 1 - i];
	}
	return soma;
}

