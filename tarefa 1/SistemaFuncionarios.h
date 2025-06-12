// SistemaFuncionarios.h
#include <iostream>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome;
    int id;
    double salario;
    string departamento;

public:
    void cadastrar(string n, int i, double s, string d);
    void mostrarDados() const;
    string getDepartamento() const;
    double getSalario() const;
};

void Funcionario::cadastrar(string n, int i, double s, string d) {
    nome = n;
    id = i;
    salario = s;
    departamento = d;
}

void Funcionario::mostrarDados() const {
    cout << "ID: " << id << ", Nome: " << nome;
    cout << ", Salário: " << salario;
    cout << ", Departamento: " << departamento << endl;
}

string Funcionario::getDepartamento() const {
    return departamento;
}

double Funcionario::getSalario() const {
    return salario;
}

