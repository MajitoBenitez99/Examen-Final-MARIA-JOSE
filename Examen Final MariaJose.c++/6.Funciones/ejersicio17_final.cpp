//Hecho por Maria Jose//
#include <iostream>
using namespace std;

// Función para intercambiar valores
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    intercambiar(num1, num2);
    cout << "Numeros intercambiados: " << num1 << " " << num2 << endl;
    return 0;
}
