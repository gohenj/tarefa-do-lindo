

class Terreno {
private:
    double largura;
    double comprimento;

public:
    // Construtor para inicializar o objeto com os dados
    Terreno(double larg, double comp) {
        largura = larg;
        comprimento = comp;
    }

    double getArea() {
        return largura * comprimento;
    }

    double getPreco(double valorMetro) {
        return getArea() * valorMetro;
    }
};


