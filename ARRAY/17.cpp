#include <iostream>
using namespace std;

int main() {
    int A[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];

        if (A[i] < 0) {
            A[i] = 0;
        }
    }

    cout << "Vetor modificado: ";

    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
