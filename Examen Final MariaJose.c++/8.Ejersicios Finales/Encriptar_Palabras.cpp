//Hecho por Maria Jose//
#include <iostream>
#include <string>
using namespace std;

string encriptar(string palabra, int clave) {
    string resultado = "";
    for (char c : palabra) {
        resultado += char(c + clave); // Desplazar ASCII por la clave
    }
    return resultado;
}

int main() {
    string palabra;
    int clave;

    cout << "Ingrese una palabra para encriptar: ";
    cin >> palabra;

    cout << "Ingrese una clave (1-5): ";
    cin >> clave;

    if (clave < 1 || clave > 5) {
        cout << "Clave fuera de rango." << endl;
        return 1;
    }

    string palabraEncriptada = encriptar(palabra, clave);
    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}
