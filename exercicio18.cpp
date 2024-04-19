#include <iostream>
#include <string>
using namespace std;

void trocar(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    string cidades[15];

    cout << "digite os nomes das 15 cidades:" << endl;
    cin >> cidades[0] >> cidades[1] >> cidades[2] >> cidades[3] >> cidades[4] >> cidades[5] >> cidades[6] >> cidades[7] >> cidades[8] >> cidades[9] >> cidades[10] >> cidades[11] >> cidades[12] >> cidades[13] >> cidades[14];

    for (int i = 0; i < 15 - 1; ++i) {
        for (int j = 0; j < 15 - i - 1; ++j) {
            if (cidades[j] > cidades[j + 1]) {
                trocar(cidades[j], cidades[j + 1]);
            }
        }
    }

    cout << "Cidades em ordem alfabética:" << endl;
    cout << cidades[0] << endl << cidades[1] << endl << cidades[2] << endl << cidades[3] << endl << cidades[4] << endl << cidades[5] << endl << cidades[6] << endl << cidades[7] << endl << cidades[8] << endl << cidades[9] << endl << cidades[10] << endl << cidades[11] << endl << cidades[12] << endl << cidades[13] << endl << cidades[14] << endl;

    return 0;
}