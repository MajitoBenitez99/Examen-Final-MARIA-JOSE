//Hecho por Maria Jose//
[11:03 PM, 12/2/2024] majito: Ejercicio 18
[11:03 PM, 12/2/2024] majito: #include <iostream>
using namespace std;

// Función para encontrar el mayor de tres números
void encontrarMayor(int a, int b, int c, int &mayor) {
    mayor = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int num1, num2, num3, mayor;
    cout << "Ingrese tres numeros: ";
    cin >> num1 >> num2 >> num3;

    encontrarMayor(num1, num2, num3, mayor);
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
