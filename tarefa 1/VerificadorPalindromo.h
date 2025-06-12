// VerificadorPalindromo.h
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class VerificarPalindromo {
	public: 
		bool palindromo (string texto);
};

bool VerificarPalindromo::palindromo(string texto){
	int i=0;
	int j = texto.length() - 1;
	
	while(i < j){
		while (texto[i] == ' ' && i < j) i++;
		while (texto[j] == ' ' && i < j) j--;
		
		if (tolower(texto[i]) != (tolower(texto[j]))){
			return false;
		}
		
		i++;
		j--;
	}
	return true;
}

