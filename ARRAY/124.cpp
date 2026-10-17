#include <iostream>
using namespace std;

int main() {
    int A[10];
    int encontrou = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (A[i] == A[j]) {
                cout << "Valor repetido: " << A[i] << endl;
                encontrou = 1;
                break;
            }
        }
    }

    if (encontrou == 0) {
        cout << "Nao existem valores iguais." << endl;
    }

    return 0;
}
