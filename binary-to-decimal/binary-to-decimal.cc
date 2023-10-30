/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  Turns a binary number to decimal
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
 */

#include <iostream>

using namespace std;

void PrintProgramPurpouse(){
    cout << "Ingrese un numero binario: " << endl;
}

int main(){
    int binario = 0;
    int decimal;
    bool esBinario = true;

    PrintProgramPurpouse();

    char c;
    while (cin.get(c) && c != '\n'){
        if (c == '0'){
            decimal = 0;
        } else if (c == '1'){
            decimal = 1;
        } else {
            esBinario = false;
            break;
        }
        binario = (binario << 1) | decimal;
    }

    if (esBinario){
        cout << binario << endl;
    } else {
        cout << "La entrada no es un numero binario" << endl;
    }
}