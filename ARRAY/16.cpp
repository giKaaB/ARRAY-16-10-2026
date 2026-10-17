#include <iostream>
using namespace std;

int main() {
    float A[5];
    int codigo;

    for (int i = 0; i < 5; i++) {
        cout << "Digite um numero real: ";
        cin >> A[i];
    }

    cout << "Digite um codigo: ";
    cin >> codigo;

    if (codigo == 0) {
        cout << "Programa finalizado." << endl;
    }
    else if (codigo == 1) {
        for (int i = 0; i < 5; i++) {
            cout << A[i] << " ";
        }
    }
    else if (codigo == 2) {
        for (int i = 4; i >= 0; i--) {
            cout << A[i] << " ";
        }
    }
    else {
        cout << "Codigo invalido." << endl;
    }

    return 0;
}
