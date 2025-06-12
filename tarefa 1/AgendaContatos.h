// AgendaContatos.h
#include <string>
using namespace std;

class Contato {
private:
    string nome;
    string telefone;
    string email;

public:
    void cadastrar(string n, string t, string e);
    void mostrar() const;
    string getNome() const;
    string getTelefone() const;
    string getEmail() const;
};

void Contato::cadastrar(string n, string t, string e) {
    nome = n;
    telefone = t;
    email = e;
}

void Contato::mostrar() const {
    cout << "Nome: " << nome << ", Telefone: " << telefone << ", Email: " << email << endl;
}

string Contato::getNome() const {
    return nome;
}

string Contato::getTelefone() const {
    return telefone;
}

string Contato::getEmail() const {
    return email;
}
