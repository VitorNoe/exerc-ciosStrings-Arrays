#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[20];

    cin.getline(frase, 20);
    char* palavraMaisLonga = strtok(frase, " ");
    char* proximaPalavra = strtok(frase, " ");
    while (proximaPalavra) {
        if (strlen(proximaPalavra) > strlen(palavraMaisLonga)) {
            palavraMaisLonga = proximaPalavra;
        }
        proximaPalavra = strtok(nullptr, " ");
    }

    cout << "A palavra mais longa da frase é: " << palavraMaisLonga << endl;
    return 0;
}