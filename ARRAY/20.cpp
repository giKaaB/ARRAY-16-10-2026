#include <iostream>
using namespace std;

int main() {
    int A[10], B[10];
    int quantidade = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero entre 0 e 50: ";
        cin >> A[i];

        if (A[i] >= 0 && A[i] <= 50) {
            if (A[i] % 2 != 0) {
                B[quantidade] = A[i];
                quantidade++;
            }
        }
    }

    cout << "Primeiro vetor:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";

        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }

    cout << "Vetor de impares:" << endl;

    for (int i = 0; i < quantidade; i++) {
        cout << B[i] << " ";

        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }

    return 0;
}
