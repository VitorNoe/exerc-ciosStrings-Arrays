#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome[10];
    int idade[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> nome[i];
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idade[i];
    }

    cout << "Nome\tIdade" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << nome[i] << "\t" << idade[i] << endl;
    }

    return 0;
}