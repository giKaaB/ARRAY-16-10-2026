#include <iostream>
using namespace std;

int main() {
    int A[5];
    int maior, menor;
    float soma = 0, media;

    for (int i = 0; i < 5; i++) {
        cout << "Digite um valor: ";
        cin >> A[i];

        soma = soma + A[i];
    }

    maior = A[0];
    menor = A[0];

    for (int i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }

        if (A[i] < menor) {
            menor = A[i];
        }
    }

    media = soma / 5;

    cout << "Valores: ";
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }

    cout << "\nMaior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Media: " << media << endl;

    return 0;
}
