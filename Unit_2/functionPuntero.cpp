#include <iostream>
#include <stdio.h>

using namespace std;

int function(int valor){
	valor = valor + 10;
	return valor;
}

int functionPuntero(int *valor){
	*valor = *valor + 10;
	return *valor;
}

int main(){
	int numero = 10;
	cout << "Before function: " << numero << endl;
	
	function(numero);
	cout << "After function: " << numero << endl;
	
	cout << "Before functionPuntero: " << numero << endl;
	functionPuntero(&numero);
	
	cout << "After functionPuntero: " << numero << endl;
}
