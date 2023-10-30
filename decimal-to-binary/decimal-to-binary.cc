/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  Turns a decimal number to binary
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
 */


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