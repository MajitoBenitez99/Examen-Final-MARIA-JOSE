#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << "El numero mayor es: " << num1 << endl;
    else if (num2 > num1)
        cout << "El numero mayor es: " << num2 << endl;
    else
        cout << "Ambos numeros son iguales." << endl;

    return 0;
}
