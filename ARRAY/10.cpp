#include <iostream>
using namespace std;

int main() {
    float notas[15];
    float soma = 0, media;

    for (int i = 0; i < 15; i++) {
        cout << "Digite a nota do aluno: ";
        cin >> notas[i];

        soma = soma + notas[i];
    }

    media = soma / 15;

    cout << "Media geral: " << media << endl;

    return 0;
}
