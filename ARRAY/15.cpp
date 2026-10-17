#include <iostream>
using namespace std;

int main() {
    int A[20];
    int repetido;

    for (int i = 0; i < 20; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    cout << "Valores sem repeticao: ";

    for (int i = 0; i < 20; i++) {
        repetido = 0;

        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                repetido = 1;
            }
        }

        if (repetido == 0) {
            cout << A[i] << " ";
        }
    }

    return 0;
}
