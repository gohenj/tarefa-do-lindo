// ConversorTemperatura.h
#include <iostream>
using namespace std;

class ConversorTemperatura {
	public:
		double celsiusParaFahrenheit(double celsius);
		double fahrenheitParaCelsius(double fahrenheit);
};

double ConversorTemperatura::celsiusParaFahrenheit(double celsius){
	return (celsius * 9/5) + 32;
}

double ConversorTemperatura::fahrenheitParaCelsius(double fahrenheit){
	return (fahrenheit - 32) * 5/9;
}
