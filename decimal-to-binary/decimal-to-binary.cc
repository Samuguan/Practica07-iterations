

#include <iostream>

using namespace std;

int main() {
    int decimal, cociente, residuo;
    int binario[32];  // Almacenar los dígitos binarios (máximo 32 bits)
    int longitud = 0;

    cout << "Ingrese un número decimal: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "El número binario equivalente es: 0" << endl;
        return 0;
    }

    if (decimal < 0) {
        cout << "El programa no admite números negativos." << endl;
        return 1;
    }

    cociente = decimal;

    while (cociente > 0) {
        residuo = cociente % 2;
        binario[longitud] = residuo;
        cociente = cociente / 2;
        longitud++;
    }

    cout << "El número binario equivalente es: ";

    for (int i = longitud - 1; i >= 0; i--) {
        cout << binario[i];
    }

    cout << endl;

    return 0;
}