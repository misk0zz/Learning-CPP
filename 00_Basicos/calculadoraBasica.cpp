#include <iostream>

int main() {
    double num1, num2;
    char operacion;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el operador (+, -, *, /): ";
    std::cin >> operacion;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    double resultado;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "¡Error! Division entre 0 no está permitida." << std::endl;
                return 1; // El return 1 indica un error
            }
            break;
        default:
            std::cout << "¡Error! Operador inválido." << std::endl;
            return 1; // El return 1 indica un error
    }

    std::cout << "Result: " << resultado << std::endl;

    return 0;
}
