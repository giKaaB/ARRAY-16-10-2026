#include <iostream>
using namespace std;

int main() {
    int A[50];

    for (int i = 0; i < 50; i++) {
        A[i] = (i + 5 * i) % (i + 1);
    }

    for (int i = 0; i < 50; i++) {
        cout << A[i] << " ";

        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
