

class Venda {
private:
    double precoUnitario;
    int quantidade;

public:
    Venda(double preco, int qtd) {
        precoUnitario = preco;
        quantidade = qtd;
    }

    double getTroco(double dinheiroRecebido) {
        double total = precoUnitario * quantidade;
        return dinheiroRecebido - total;
    }
};


