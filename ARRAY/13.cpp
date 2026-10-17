#include <iostream>
using namespace std;

int main() {
    int A[5];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite um valor: ";
        cin >> A[i];
    }

    maior = A[0];
    menor = A[0];

    for (int i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posMaior = i;
        }

        if (A[i] < menor) {
            menor = A[i];
            posMenor = i;
        }
    }

    cout << "Posicao do maior: " << posMaior << endl;
    cout << "Posicao do menor: " << posMenor << endl;

    return 0;
}
