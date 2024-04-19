#include <iostream>
#include <string>
using namespace std;

int main() {
    string produto[20];
    int preco[20];

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o nome do produto " << i + 1 << ": ";
        cin >> produto[i];
        cout << "Digite o preço do produto " << i + 1 << ": ";
        cin >> preco[i];
    }

    cout << "Produto\tPreço" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << produto[i] << "\t" << preco[i] << endl;
    }

    return 0;
}