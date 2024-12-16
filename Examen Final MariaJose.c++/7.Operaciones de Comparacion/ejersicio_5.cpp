//Hecho por Maria Jose/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    if (a < b && b < c)
        cout << "Orden Ascendente" << endl;
    else if (a > b && b > c)
        cout << "Orden Descendente" << endl;
    else
        cout << "Desordenados" << endl;

    return 0;
}
