/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  Prints on the screen the sum of the digits of a number
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
 */

#include <iostream>

using namespace std;

/**
* Prints the program purpouse
* @return nothing
*/

void Printprogrampurpouse(){
    cout << "Reads a natural number and print the sum of the digits" << endl;
}

/**
* a normal member taking one value 
* @param nume user's input number
* @return suma
*/

int sumatorio(int nume){
    int aux{0}, suma{0};
    while (nume > 0){
        aux = nume % 10;
        nume = nume /10;
        suma = suma + aux;
    }
    return suma;
}

int main(){
    Printprogrampurpouse();
    int num{0};
    cin >> num;
    cout << sumatorio(num) << endl;
    return 0;
}