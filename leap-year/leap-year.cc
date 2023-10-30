/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  Check if the given year is a leap year
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
 */


#include <iostream>

int main() {
    int year;

    std::cout << "Ingrese un año: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " es un año bisiesto." << std::endl;
    } else {
        std::cout << year << " no es un año bisiesto." << std::endl;
    }

    return 0;
}
