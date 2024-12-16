#include <iostream>
using namespace std;

int main() {
    int opcion, num1, num2;
    cout << "Menu:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\nElija una opcion: ";
    cin >> opcion;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    switch (opcion) {
        case 1: cout << "Suma: " << num1 + num2 << endl; break;
        case 2: cout << "Resta: " << num1 - num2 << endl; break;
        case 3: cout << "Multiplicacion: " << num1 * num2 << endl; break;
        case 4:
            if (num2 != 0)
                cout << "Division: " << num1 / num2 << endl;
            else
                cout << "No se puede dividir por cero." << endl;
            break;
        default: cout << "Opcion invalida." << endl;
    }

    return 0;
}
