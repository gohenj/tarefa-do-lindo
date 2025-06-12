
#include <string>

class Pessoa {
private:
    std::string nome; // Usamos std::string para evitar conflito com 'using namespace std' no main
    int idade;

public:
    Pessoa(std::string n, int i) {
        nome = n;
        idade = i;
    }

    std::string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }
};

