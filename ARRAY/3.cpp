#include <iostream>
using namespace std;

int main() {
    float A[10], B[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero real: ";
        cin >> A[i];

        B[i] = A[i] * A[i];
    }

    cout << "Valores originais:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    cout << "\nQuadrados dos valores:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
