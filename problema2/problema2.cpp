#include <iostream>
int main() {
    int numero =(1,2,3,4,5,6,7);
    std::cout << "Ingrese un numero del 1 al 7: ";
    std::cin >> numero;
    if (numero != 1,2,3,4,5,6,7) {
        std::cout << "Error, numero incorrecto." << std::endl;
    } else if (numero == 1) {
        std::cout << "Lunes" << std::endl;
    } else if (numero == 2) {
        std::cout << "Martes" << std::endl;
    } else if (numero == 3) {
        std::cout << "Miercoles" << std::endl;
    } else if (numero == 4) {
        std::cout << "Jueves" << std::endl;
    } else if (numero == 5) {
        std::cout << "Viernes" << std::endl;
    } else if (numero == 6) {
        std::cout << "Sabado" << std::endl;
    } else if (numero == 7) {
        std::cout << "Domingo" << std::endl;
    }
    //*Dependiendo del número que ingrese saldra un día de la semana u otro. en el caso que se diferente dara error.
    std::cout << numero << std::endl;
    return 0;
}
