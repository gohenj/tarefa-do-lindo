// MainAgendaContatos.cpp
#include <bits/stdc++.h>
#include "AgendaContatos.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    Contato contatos[10];
    int totalContatos = 0;
    int opcao;

    do {
        cout << "\n========== Menu Agenda ==========\n";
        cout << "[1] Adicionar contato\n";
        cout << "[2] Listar contatos\n";
        cout << "[3] Buscar por nome\n";
        cout << "[0] Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        if (opcao == 1) {
            if (totalContatos >= 10) {
                cout << "Agenda cheia! (máximo 10 contatos)\n";
                continue;
            }

            string nome, tel, email;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Telefone: ";
            getline(cin, tel);
            cout << "Email: ";
            getline(cin, email);

            contatos[totalContatos].cadastrar(nome, tel, email);
            totalContatos++;

        } else if (opcao == 2) {
            cout << "\nContatos armazenados:\n";
            for (int i = 0; i < totalContatos; i++) {
                contatos[i].mostrar();
            }

        } else if (opcao == 3) {
            string nomeBusca;
            bool encontrado = false;
            cout << "Digite o nome do contato: ";
            cin.ignore();
            getline(cin, nomeBusca);

            for (int i = 0; i < totalContatos; i++) {
                if (contatos[i].getNome() == nomeBusca) {
                    cout << "Telefone: " << contatos[i].getTelefone()
                         << ", Email: " << contatos[i].getEmail() << endl;
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                cout << "Contato não encontrado.\n";
            }
        }

    } while (opcao != 0);

    return 0;
}
