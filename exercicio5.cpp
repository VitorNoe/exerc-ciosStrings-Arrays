  #include <iostream>
  #include <string>
  using namespace std;

  int main() {
    char frase[20];

    cout << "Digite uma frase: ";
    cin.getline(frase, 20);
    cout << "A frase digitada foi: " << frase << endl;

    return 0;
  }