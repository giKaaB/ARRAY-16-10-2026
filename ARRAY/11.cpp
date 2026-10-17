int negativos = 0;
    float soma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero real: ";
        cin >> A[i];

        if (A[i] < 0) {
            negativos++;
        }

        if (A[i] > 0) {
            soma = soma + A[i];
        }
    }

    cout << "Quantidade de negativos: " << negativos << endl;
    cout << "Soma dos positivos: " << soma << endl;

    return 0;
}
