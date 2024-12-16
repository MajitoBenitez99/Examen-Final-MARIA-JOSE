#include <iostream>
#include <string>
using namespace std;

string desencriptar(string encriptado, int clave) {
    string resultado = "";
    for (char c : encriptado) {
        resultado += char(c - clave); // Revertir desplazamiento ASCII
    }
    return resultado;
}

int main() {
    string palabraEncriptada;

    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    cout << "Posibles desencriptaciones:" << endl;

    for (int clave = 1; clave <= 5; ++clave) {
        string palabraDesencriptada = desencriptar(palabraEncriptada, clave);
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}
