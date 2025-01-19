#include <iostream>

int main() {
	int numeroUno{ 0 }, numeroDos{ 0 };
	std::cout << "introduzca un numero entero" << std::endl;
	std::cin >> numeroUno;
	std::cout << "\nintroduzca un numero entero" << std::endl;
	std::cin >> numeroDos;

	if (numeroUno > numeroDos) {
		std::cout << "numero uno es mayor" << std::endl;
	} 
	return 0;
}