#include <iostream>
#include <string>
using namespace std;

int main() {
    string animais[10] = {"Gato", "Cachorro", "Elefante", "Zebra", "Leão", "Tigre", "Macaco", "Passaro", "Urso", "Coelho"};
    
    char letra;

    cout << "Insira uma letra em maiúscula: ";
    cin >> letra;

    for (const auto& animal : animais) {
        if (animal[0] == letra || animal[0] == letra - 'A' + 'a') {
            cout << "Animal correspondente: " << animal << endl;
            return 0;
        }
    }
}