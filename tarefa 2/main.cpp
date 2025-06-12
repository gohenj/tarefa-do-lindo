#include <iostream>
#include <string>
#include <iomanip>
#include <clocale>

// Incluindo todas as nossas classes
#include "Terreno.h"
#include "Retangulo.h"
#include "Pessoa.h"
#include "Venda.h"
#include "Circulo.h"
#include "Funcionario.h"

// Agora podemos usar cout, cin, etc., sem o std::
using namespace std;

// Funções para organizar a execução de cada exercício
void executar_terreno();
void executar_retangulo();
void executar_idades();
void executar_soma();
void executar_troco();
void executar_circulo();
void executar_pagamento();
void executar_consumo();
void executar_medidas();
void executar_duracao();

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Menu para escolher qual exercício rodar
    int escolha;
    do {
        cout << "\n--- LISTA DE EXERCICIOS POO ---" << endl;
        cout << "1. Terreno" << endl;
        cout << "2. Retangulo" << endl;
        cout << "3. Idades" << endl;
        cout << "4. Soma" << endl;
        cout << "5. Troco" << endl;
        cout << "6. Circulo" << endl;
        cout << "7. Pagamento" << endl;
        cout << "8. Consumo" << endl;
        cout << "9. Medidas" << endl;
        cout << "10. Duracao" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1: executar_terreno(); break;
            case 2: executar_retangulo(); break;
            case 3: executar_idades(); break;
            case 4: executar_soma(); break;
            case 5: executar_troco(); break;
            case 6: executar_circulo(); break;
            case 7: executar_pagamento(); break;
            case 8: executar_consumo(); break;
            case 9: executar_medidas(); break;
            case 10: executar_duracao(); break;
            case 0: cout << "Encerrando..." << endl; break;
            default: cout << "Opcao invalida!" << endl; break;
        }
    } while (escolha != 0);

    return 0;
}

// --- Implementação das Funções de Execução ---

void executar_terreno() {
    cout << "\n--- Problema 'terreno' ---" << endl;
    double largura, comprimento, valorMetro;
    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    // Criando um objeto da classe Terreno
    Terreno meuTerreno(largura, comprimento);

    cout << fixed << setprecision(2);
    // Chamando os métodos do objeto
    cout << "Area do terreno = " << meuTerreno.getArea() << endl;
    cout << "Preco do terreno = " << meuTerreno.getPreco(valorMetro) << endl;
}

void executar_retangulo() {
    cout << "\n--- Problema 'retangulo' ---" << endl;
    double base, altura;
    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    Retangulo meuRetangulo(base, altura);

    cout << fixed << setprecision(4);
    cout << "AREA = " << meuRetangulo.getArea() << endl;
    cout << "PERIMETRO = " << meuRetangulo.getPerimetro() << endl;
    cout << "DIAGONAL = " << meuRetangulo.getDiagonal() << endl;
}

void executar_idades() {
    cout << "\n--- Problema 'idades' ---" << endl;
    string nome1, nome2;
    int idade1, idade2;
    
    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;
    
    Pessoa p1(nome1, idade1);
    Pessoa p2(nome2, idade2);
    
    double media = (double)(p1.getIdade() + p2.getIdade()) / 2.0;
    
    cout << fixed << setprecision(1);
    cout << "A idade media de " << p1.getNome() << " e " << p2.getNome() << " eh de " << media << " anos." << endl;
}

void executar_troco() {
    cout << "\n--- Problema 'troco' ---" << endl;
    double preco, dinheiro;
    int qtd;
    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    Venda minhaVenda(preco, qtd);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << minhaVenda.getTroco(dinheiro) << endl;
}

void executar_circulo() {
    cout << "\n--- Problema 'circulo' ---" << endl;
    double r;
    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    Circulo meuCirculo(r);

    cout << fixed << setprecision(3);
    cout << "AREA = " << meuCirculo.getArea() << endl;
}

void executar_pagamento() {
    cout << "\n--- Problema 'pagamento' ---" << endl;
    string nome;
    double valorHora;
    int horas;
    
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    Funcionario func(nome, valorHora, horas);

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << func.getNome() << " deve ser " << func.getPagamento() << endl;
}

// Funções que mantivemos procedurais por simplicidade
void executar_soma() { /* ... código idêntico ao anterior ... */ }
void executar_consumo() { /* ... código idêntico ao anterior ... */ }
void executar_medidas() { /* ... código idêntico ao anterior ... */ }
void executar_duracao() { /* ... código idêntico ao anterior ... */ }
