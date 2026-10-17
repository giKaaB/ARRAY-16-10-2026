#include <iostream>
using namespace std;

int main() {
    int A[10];
    int pares = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];

        if (A[i] % 2 == 0) {
            pares++;
        }
    }

    cout << "Quantidade de pares: " << pares << endl;

    return 0;
}
