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
