#include <iostream>
#include <string>
using namespace std;

int main() {
    char texto[50];
    cin.getline(texto, 50);
    string textoString(texto);
    
    int numPalavras = 0;
    for (int i = 0; i < textoString.length(); i++) {
        if (textoString[i] == ' ' || textoString[i] == '\t' || textoString[i] == '\n') {
            numPalavras++;
        }
    }

    numPalavras++;
    cout << "Número de palavras no texto: " << numPalavras << endl;
    return 0;
}