//Hecho por Maria Jose//
#include <iostream>
using namespace std;

// Declaraci�n de la funci�n
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
