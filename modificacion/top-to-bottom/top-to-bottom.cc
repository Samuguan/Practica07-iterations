/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief Print all integer numbers between x and y (or between y and x), in decreasing order.
 * @see https://jutge.org/problems/P59875_en
 */

#include <iostream>

using namespace std;


int IntegerNumbers(int num1, int num2){
    if (num1 < num2){
		do{
			cout << num2 << endl;
			--num2;
		}while(num2 >= num1);
	}
	else{
		do{
		cout << num1 << endl;
		--num1;
		}while(num1 >= num2);
		}
    return 0;
}


int main(){
	int numero_1, numero_2;
	cin >> numero_1;
	cin >> numero_2;
    cout << IntegerNumbers(numero_1, numero_2) << endl;
}
                
