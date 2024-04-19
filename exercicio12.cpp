#include <iostream>
#include <string>
using namespace std;

int contarVogais(const string& frase) {
    int num_vogais = 0;
    for (char letra : frase) {

        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' ) {
            num_vogais++;
        }
    }
    return num_vogais;
}

int main() {
    char frase[20];
    std::cout << "Digite uma frase: ";
    cin.getline(frase, 20);
    string frase_str(frase);
    int num_vogais = contarVogais(frase_str);
    cout << "Números de vogais na frase: " << num_vogais << endl;

    return 0;
}