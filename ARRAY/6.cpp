#include <iostream>
using namespace std;

int main() {
    int A[10];
    int maior, menor;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    maior = A[0];
    menor = A[0];

    for (int i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }

        if (A[i] < menor) {
            menor = A[i];
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
