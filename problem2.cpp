#include <iostream>

int main() {
	// Nombre en el menu del alumno que realizo el codigo
	std::cout << "Alumno: Rodrigo Ferrufino Loayza" << std::endl;
	
	char opcion;
	do {
		// Menu principal que saldra en pantalla
		std::cout << "TP01º" << std::endl;
		std::cout << "1. Multiplicacion con 2 numeros" << std::endl;
		std::cout << "2. Division con 2 numeros" << std::endl;
		std::cout << "3. Multiplicacion con 3 numeros" << std::endl;
		std::cout << "4. Mayor de 3 numeros" << std::endl;
		std::cout << "S. Salir" << std::endl;
		std::cout << "Ingrese la opcion: ";
		std::cin >> opcion;
		
		switch (opcion) {
		case '1': {
			// Multiplicacion de 2 numeros
			double num1, num2;
			std::cout << "Ingrese el primer numero: ";
			std::cin >> num1;
			std::cout << "Ingrese el segundo numero: ";
			std::cin >> num2;
			double resultado = num1 * num2;
			std::cout << "El resultado es: " << resultado << std::endl;
			break;
		}
		case '2': {
			// Division de 2 numeros
			double num1, num2;
			std::cout << "Ingrese el numerador: ";
			std::cin >> num1;
			std::cout << "Ingrese el denominador (distinto de cero): ";
			std::cin >> num2;
			if (num2 != 0) {
				double resultado = num1 / num2;
				std::cout << "El resultado es: " << resultado << std::endl;
			} else {
				std::cout << "Error: No es posible una division entre cero." << std::endl;
			}
			break;
		}
		case '3': {
			// Multiplicacion de 3 numeros
			double num1, num2, num3;
			std::cout << "Ingrese el primer numero: ";
			std::cin >> num1;
			std::cout << "Ingrese el segundo numero: ";
			std::cin >> num2;
			std::cout << "Ingrese el tercer numero: ";
			std::cin >> num3;
			double resultado = num1 * num2 * num3;
			std::cout << "El resultado es: " << resultado << std::endl;
			break;
		}
		case '4': {
			// Mayor de 3 numeros
			double num1, num2, num3;
			std::cout << "Ingrese el primer numero: ";
			std::cin >> num1;
			std::cout << "Ingrese el segundo numero: ";
			std::cin >> num2;
			std::cout << "Ingrese el tercer numero: ";
			std::cin >> num3;
			
			//determinar el mayor de 3 numeros codigo principal
			double mayor;
			if (num1 > num2) {
				if (num1 > num3) {
					mayor = num1;
				} else {
					mayor = num3;
				}
			} else {
				if (num2 > num3) {
					mayor = num2;
				} else {
					mayor = num3;
				}
			}
			
			std::cout << "El mayor de los tres numeros es: " << mayor << std::endl;
			break;
		}
		case 'S':
		case 's':
			// Salir del programa
			std::cout << "Hasta pronto." << std::endl;
			break;
		default:
			// Opcion no valida
			std::cout << "Opcion no valida. Intente de nuevo." << std::endl;
		}
		
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}
