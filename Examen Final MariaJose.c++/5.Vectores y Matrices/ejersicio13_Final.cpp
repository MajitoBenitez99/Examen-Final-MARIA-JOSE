#include <iostream>
using namespace std;

int main() {
    int vector[5];

    cout << "Ingrese 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> vector[i];
    }

    cout << "Numeros en orden inverso: ";
    for (int i = 4; i >= 0; i--) {
        cout << vector[i] << " ";
    }

    return 0;
}
