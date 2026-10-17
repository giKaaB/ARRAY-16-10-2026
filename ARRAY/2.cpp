#include <iostream>
using namespace std;

int main() {
    int A[6];

    for (int i = 0; i < 6; i++) {
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << A[i] << endl;
    }

    return 0;
}
