#include <iostream>
using namespace std;

int main() {
    int A[8], X, Y;

    for (int i = 0; i < 8; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    cout << "Digite a posicao X (0 a 7): ";
    cin >> X;

    cout << "Digite a posicao Y (0 a 7): ";
    cin >> Y;

    cout << "Soma: " << A[X] + A[Y] << endl;

    return 0;
}
