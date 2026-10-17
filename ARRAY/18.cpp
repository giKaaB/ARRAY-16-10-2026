#include <iostream>
using namespace std;

int main() {
    int A[10];
    int x;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    cout << "Digite o valor de X: ";
    cin >> x;

    if (x != 0) {
        cout << "Multiplos de " << x << ": ";

        for (int i = 0; i < 10; i++) {
            if (A[i] % x == 0) {
                cout << A[i] << " ";
            }
        }
    }
    else {
        cout << "X nao pode ser zero." << endl;
    }

    return 0;
}
