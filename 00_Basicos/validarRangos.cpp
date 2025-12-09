/*
Ejercico en el que validaremos si el número introducido está entre
los números 10 y 20.
*/

#include <iostream>

int main(){

int numero;

std::cout << "Introduce un número entre 10 y 20: ";
std::cin >> numero;

if (numero >= 10 && numero <= 20) {
    std::cout << "El número " << numero << " está dentro del rango permitido." << std::endl;
} else {
    std::cout << "El número " << numero << " está fuera del rango permitido." << std::endl;
}

return 0;

}

