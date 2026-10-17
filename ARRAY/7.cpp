#include <iostream>
using namespace std;

int main() {
    int A[10];
    int maior, posicao;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    maior = A[0];
    posicao = 0;

    for (int i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicao = i;
        }
    }

    cout << "Vetor: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    cout << "\nMaior elemento: " << maior << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
} 
