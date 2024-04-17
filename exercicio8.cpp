#include <iostream>
#include <string>

int main() {
    std::string cores[7] = {"Vermelho", "Laranja", "Amarelo", "Verde", "Azul", "violeta", "Marrom"};
    int posicao;

    std::cout << "Digite um número entre 1 e 7: ";
    std::cin >> posicao;

    if (posicao >= 1 && posicao <= 7) {
        std::cout << "A cor na posição " << posicao << " é: " << cores[posicao - 1] << std::endl;
    }

    return 0;
}