// MainSistemaFuncionarios.cpp
#include <bits/stdc++.h>
#include "SistemaFuncionarios.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    Funcionario funcionarios[100];
    int totalFuncionarios = 0;
    int opcao;

    do {
        cout << "\n========== Menu Funcion�rios ==========\n";
        cout << "[1] Cadastrar funcion�rio\n";
        cout << "[2] Total de sal�rios por departamento\n";
        cout << "[3] Listar todos os funcion�rios\n";
        cout << "[0] Sair\n";
        cout << "\nOp��o: ";
        cin >> opcao;

        if (opcao == 1) {
            string nome, depto;
            int id;
            double salario;

            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "ID: ";
            cin >> id;
            cout << "Sal�rio: ";
            cin >> salario;
            cout << "Departamento: ";
            cin.ignore();
            getline(cin, depto);

            funcionarios[totalFuncionarios].cadastrar(nome, id, salario, depto);
            totalFuncionarios++;

        } else if (opcao == 2) {
            string buscaDepto;
            double total = 0;
            cout << "Digite o departamento: ";
            cin.ignore();
            getline(cin, buscaDepto);

            for (int i = 0; i < totalFuncionarios; i++) {
                if (funcionarios[i].getDepartamento() == buscaDepto) {
                    total += funcionarios[i].getSalario();
                }
            }

            cout << "Total de sal�rios do departamento " << buscaDepto << ": R$" << total << endl;

        } else if (opcao == 3) {
            cout << "\nFuncion�rios cadastrados:\n";
            for (int i = 0; i < totalFuncionarios; i++) {
                funcionarios[i].mostrarDados();
            }
        }

    } while (opcao != 0);

    return 0;
}

