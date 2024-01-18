#include <iostream>

using namespace std;

int main() {
	// Declaracion de variables
	int n1, n2;
	unsigned int nn1, nn2;
	double d1, d2;
	char c1;
	bool b1;
	
	// colocamos las variables a realizar
	n1 = 2147483645;  // Asignamos un valor grande a n1
	nn1 = n1 + 3;     // Realizamos la operacion n1 + 3 y almacenamos en nn1
	c1 = n1 + 2;      // Realizamos la operacion n1 + 2 y almacenamos en c1
	d1 = c1 + n1;     // Realizamos la operacion c1 + n1 y almacenamos en d1
	b1 = -1000;       // Asignamos un valor negativo a b1
	
	// Muestra de resultados en pantalla con comentarios explicativos
	cout <<n1<<endl;
	cout << "Resultado de n1 + 3 (nn1): " << nn1 << endl;
	cout << "Resultado de n1 + 2, asignado a c1: " << endl;
	cout << "Resultado de c1 + n1, asignado a d1: " << d1 << endl;
	cout << "Valor de b1: " << b1 << endl;
	
	return 0;
}
