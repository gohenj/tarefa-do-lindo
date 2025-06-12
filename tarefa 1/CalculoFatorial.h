// CalculoFatorial.h
#include <iostream>
using namespace std;

class CalculoFatorial {
	public: 
		long long calcular(int n);
};

long long CalculoFatorial::calcular(int n){
	if (n < 0){
		return -1;
	}
	if (n == 0){
		return 1;
	}
	return n * calcular(n-1);
}
