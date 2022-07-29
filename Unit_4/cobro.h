#include <iostream>
#include "revisarprecio.h"

using namespace std;

float subtotal = 0;
int contador = 0;
int descuento = 0;

void cobro(){

cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
cout << "++++++++++          Sistema de Cobro          ++++++++++" << endl;
cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
cout << "\n\n" << "Ingrese codigo de su producto" << endl;
	
int codigoDeProducto;
cin >> codigoDeProducto;

if(codigoDeProducto < 1 || codigoDeProducto > 100){
	cout << "Codigo invalido. Intente de nuevo" << endl;
    cout << "El codigo debe estar entre 1 y 100" << endl;
}
else{
		
		
		
  		while(~codigoDeProducto == 0){
 		    subtotal = subtotal + revisarPrecio();
    		contador ++;
			
	 		cin >> codigoDeProducto;
//	 		cout << "Codigo de producto: " << codigoDeProducto << "\t\tPrecio: $" << "22.22" << endl;
//	 		cout << "Subtotal: $" << subtotal << endl;
//	 		cout << "Numero de articulos: " << contador << "\t\tDescuento: " << endl;
	 		
	 		if(contador > 14){
				descuento = .2;			
				cout << "Codigo de producto: " << codigoDeProducto << "\t\tPrecio: $" << "22.22" << endl;
	 			cout << "Numero de articulos: " << contador << "\t\tDescuento: 20%" << endl;
				cout << "Subtotal: $" << subtotal << endl;
	 			
			}
			else if((contador > 9) && (contador <15)){
				descuento = .15;
				cout << "Codigo de producto: " << codigoDeProducto << "\t\tPrecio: $" << "22.22" << endl;
	 			cout << "Numero de articulos: " << contador << "\t\tDescuento: 15%" << endl;				
				cout << "Subtotal: $" << subtotal << endl;
	 			
			}
			else if(contador < 10){
				descuento = 0;				
				cout << "Codigo de producto: " << codigoDeProducto << "\t\tPrecio: $" << "22.22" << endl;
	 			cout << "Numero de articulos: " << contador << "\t\tDescuento: 0%" << endl;
				cout << "Subtotal: $" << subtotal << endl;
	 			
			}
			
			
			cout << "\n\n" << "Ingrese codigo del siguiente producto" << endl;
			cout << "Ingrese 0 para terminar el escaneo de productos" << endl;
		}
	}
}