#include <iostream>
int main() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El numero ingresado negativo";
    } else if (numero == 0) {
        std::cout << "El numero ingresado cero";
    } else if (numero > 0) {
        std::cout << "El numero ingresado positivo";
    }
    return 0;
}
