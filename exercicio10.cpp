#include <iostream>
#include <string>
using namespace std;

int main() {
    string dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

    int posicao;

    cout << "Insira um número entre 1 e 7: ";
    cin >> posicao;

    if (posicao >= 1 && posicao <= 7) {
        cout << "O dia da semana na posição " << posicao << " é: " << dias[posicao - 1] << endl;
    }

    return 0;
}