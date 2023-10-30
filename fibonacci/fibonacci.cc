/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  Prints on the screen the first n digits of fibonacci
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
 */

#include <iostream>

using namespace std;

/**
* a normal member taking one value 
* @param num user's input number
* @return the result of fibonacci 
*/

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

/**
* Prints the program purpouse
* @return nothing
*/

void printprogrampurpouse(){
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
}

int main() {
    int num;
    cin >> num;
    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}