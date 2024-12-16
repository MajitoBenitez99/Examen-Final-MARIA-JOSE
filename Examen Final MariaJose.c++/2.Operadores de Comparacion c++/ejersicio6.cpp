#include <iostream>
using namespace std;

int main() {
    int nums[5], ref;
    cout << "Ingrese cinco numeros: ";
    for (int i = 0; i < 5; i++)
        cin >> nums[i];

    cout << "Ingrese un numero de referencia: ";
    cin >> ref;

    bool todosMayores = true;
    for (int i = 0; i < 5; i++) {
        if (nums[i] <= ref) {
            todosMayores = false;
            break;
        }
    }

    if (todosMayores)
        cout << "Todos los numeros son mayores que el numero de referencia." << endl;
    else
        cout << "No todos los numeros son mayores que el numero de referencia." << endl;

    return 0;
}
