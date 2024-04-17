#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main () {
    char palavra1[10], palavra2[10];

    cout << "Insira a primeira palavra: ";
    cin >> palavra1;

    cout << "Insira a segunda palavra: ";
    cin >> palavra2;

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        cout << palavra1 << " vem antes de " << palavra2 << " em ordem alfabética." << endl;
    } else if (comparacao > 0) {
        cout << palavra2 << " vem antes de " << palavra1 << " em ordem alfabética." << endl;
    } else {
        cout << "As palavras são iguais em ordem alfabética." << endl;
    }

    return 0;
}