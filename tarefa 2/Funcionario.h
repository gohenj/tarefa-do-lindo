
#include <string>

class Funcionario {
private:
    std::string nome;
    double valorPorHora;
    int horasTrabalhadas;

public:
    Funcionario(std::string n, double valor, int horas) {
        nome = n;
        valorPorHora = valor;
        horasTrabalhadas = horas;
    }
    
    std::string getNome() {
        return nome;
    }

    double getPagamento() {
        return valorPorHora * horasTrabalhadas;
    }
};

