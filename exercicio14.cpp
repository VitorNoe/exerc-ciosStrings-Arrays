#include <iostream>
#include <string>
using namespace std;

void inverterPalavra(const string& palavra) {
    if (palavra.empty()) {
        return;
    }

    inverterPalavra(palavra.substr(1));
    cout << palavra[0];
}

int main() {
    char palavra[10];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Palavra invertida: ";

    inverterPalavra(palavra);
    cout << endl;

    return 0;
}