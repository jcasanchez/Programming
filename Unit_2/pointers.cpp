#include <iostream>

int main(){
	int var;
	int * pointer = &var;
	*pointer = 20;
	
	std::cout << "Value of pointer is: " << pointer << std::endl;
	std::cout << "Value of var is: " << var << std::endl;
	
	delete[] pointer;
	pointer = NULL;
	
	char *apuntador = NULL;
	char letra;
	
	apuntador = &letra;
	*apuntador = 'X';
	
	std::cout << letra;
}