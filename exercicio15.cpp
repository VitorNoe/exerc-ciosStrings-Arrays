#include <iostream>
#include <string>
using namespace std;

bool Vogais(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

}
string substituirVogais(const string& frase) {
    string  nova_frase = frase;
    for (char& letra : nova_frase) {
        if (Vogais(letra)) {
            letra = '*';
        }
    }
    return nova_frase;
}

int main() {
    char frase[20];
    std::cout << "Digite uma frase: ";
    std::cin.getline(frase, 20);
    string frase_str(frase);

    string frase_substituida = substituirVogais(frase_str);

    cout << "Frase com as vogais substituidas: " << frase_substituida << endl;

    return 0;
}