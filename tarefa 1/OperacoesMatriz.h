// OperacoesMatriz.h
#include <iostream>
using namespace std;

class MatrizOperacoes {
	public:
		int encontreMaior (int** matriz, int linha, int coluna);
		int encontreMenor (int** matriz, int linha, int coluna);
};

int MatrizOperacoes::encontreMaior(int** matriz, int linha, int coluna){
	if (linha == 0 || coluna == 0){
		return 0;
	}
	int maior = matriz[0][0];
	
	for (int i=0; i < linha; i++){
		for (int j=0; j < coluna; j++){
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	return maior;
}

int MatrizOperacoes::encontreMenor(int** matriz, int linha, int coluna){
	if (linha == 0 || coluna == 0){
		return 0;
	}
	int menor = matriz[0][0];
	
	for (int i=0; i < linha; i++){
		for (int j=0; j < coluna; j++){
			if (matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}
	return menor;
}
