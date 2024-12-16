//Hecho por Maria Jose//
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres numeros: ";
    cin >> num1 >> num2 >> num3;

    float promedio = (num1 + num2 + num3) / 3.0;
    int mayor = max(max(num1, num2), num3);
    int menor = min(min(num1, num2), num3);

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre mayor y menor: " << mayor - menor << endl;

    return 0;
}
