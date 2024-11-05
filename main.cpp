#include <iostream>
#include <algorithm>
void mostrarPromedioCalificaciones() {
}

int main() {
    std::cout << "--------Punto 1--------" << std::endl; {
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
    }
    std::cout << "--------Punto 2--------" << std::endl; {
        int numero2;
        std::cout << "Ingrese un numero del 1 al 7: ";
        std::cin >> numero2;
        if (numero2 < 1 || numero2 > 7) {
            std::cout << "Error, numero incorrecto." << std::endl;
        } else if (numero2 == 1) {
            std::cout << "Lunes" << std::endl;
        } else if (numero2 == 2) {
            std::cout << "Martes" << std::endl;
        } else if (numero2 == 3) {
            std::cout << "Miercoles" << std::endl;
        } else if (numero2 == 4) {
            std::cout << "Jueves" << std::endl;
        } else if (numero2 == 5) {
            std::cout << "Viernes" << std::endl;
        } else if (numero2 == 6) {
            std::cout << "Sabado" << std::endl;
        } else if (numero2 == 7) {
            std::cout << "Domingo" << std::endl;
        }
        //*Dependiendo del número que ingrese saldra un día de la semana u otro. en el caso que se diferente dara error.
        std::cout << numero2 << std::endl;
    } {
        std::cout << "--------Punto 3--------" << std::endl;

        int notas;
        double suma = 0.0;
        double promedio = 0.0;
        std::cout << "Ingrese la nota: ";
        std::cin >> notas;
        if (notas < 0) {
            std::cout << "Error, las notas no pueden ser menores de 0." << std::endl;
            return 1;
        }
            for (int i = 1; i <= notas; i++) {
                double nota;
                std::cout << "Ingrese el numero" << i << ":" << notas << std::endl;
                std::cin >> nota;
                suma += nota;
            }
            promedio = suma / notas;
        std::cout << "El promedio de las notas del alumno es: " << promedio << std::endl;
        }
    {
        double precio1, precio2, precio3;

        std::cout << "Ingrese el precio del primer artículo: ";
        std::cin >> precio1;
        std::cout << "Ingrese el precio del segundo artículo: ";
        std::cin >> precio2;
        std::cout << "Ingrese el precio del tercer artículo: ";
        std::cin >> precio3;

       double precios[3] = {precio1, precio2, precio3};
        std::sort(precios, precios + 3, std::greater<double>());

        double total = precios[0] + precios[1];

        std::cout << "El total que debe pagar el cliente es: " << total << std::endl;
    }
        return 0;
    }
