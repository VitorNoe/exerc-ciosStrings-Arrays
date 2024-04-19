#include <iostream>
#include <string>
using namespace std;

int main() {
    char texto[50];
    std::cout << "Digite um texto: ";
    std::cin.getline(texto, 50);

    bool encontrar = false;

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a') {
            encontrar = true;
            cout << "A letra 'a' está na posição: " << i << endl;

        }
    }

    return 0;

}