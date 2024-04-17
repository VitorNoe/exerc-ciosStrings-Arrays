#include <iostream>
using namespace std;

int main() {

    char num[10];

    num[0] = '0';
    num[1] = '1';
    num[2] = '2';
    num[3] = '3';
    num[4] = '4';
    num[5] = '5';
    num[6] = '6';
    num[7] = '7';
    num[8] = '8';
    num[9] = '9';

    cout << "Numeros pares:" << endl;
    cout << num[1] << endl;
    cout << num[3] << endl;
    cout << num[5] << endl;
    cout << num[7] << endl;
    cout << num[9] << endl;

    return 0;
}