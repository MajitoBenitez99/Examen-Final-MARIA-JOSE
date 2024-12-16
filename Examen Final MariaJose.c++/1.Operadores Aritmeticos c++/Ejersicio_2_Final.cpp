//Hecho de Maria Jose//
#include <iostream>
#define PI 3.1416
using namespace std;

int main() {
    float radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    float area = PI * radio * radio;
    float circunferencia = 2 * PI * radio;

    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
