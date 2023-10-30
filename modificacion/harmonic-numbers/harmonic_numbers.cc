/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Samuel Guánchez Torres
 * @date 30 nov 2023
 * @brief  For every pair, print Hn − Hm with 10 digits after the decimal point.
 * @see https://jutge.org/problems/P58153
 */

#include <iostream>
#include <iomanip>

using namespace std;

double HarmonicNumber(const int& numero) { //creamos una funcion que calcule el número armonico
  double sumatorio = 0; // creamos el sumatorio que acepte numeros decimales
  for (double i = 1; i <= numero; i++) { // Creamos un iterador para dividir 1 y sumarlo hasta llegar al valor introducido
    sumatorio = sumatorio + (1 / i); // Unimos cada valor al sumatorio
  }
  return sumatorio; // nos retorna el valor de sumatorio
}

int main(){
	int numero_1, numero_2;
    double resta = 0;
	cin >> numero_1, numero_2;
    resta =  HarmonicNumber(numero_1) - HarmonicNumber(numero_2);
	cout<< fixed << setprecision(10) << resta << endl;
	return 0;
}
