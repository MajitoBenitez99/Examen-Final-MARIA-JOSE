//Hecho por Maria Jose//
#include <iostream>
using namespace std;

// Declaración de la función
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    cout << "La suma es: " << sumar(num1, num2) << endl;
    return 0;
}
