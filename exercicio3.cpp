#include <iostream>
#include <string>
using namespace std;

int main() {
    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        cout << "A letra inserida é uma vogal." << endl;
    } else {
        cout << "A letra inserida não é uma vogal." << endl;
    }

    return 0;
}