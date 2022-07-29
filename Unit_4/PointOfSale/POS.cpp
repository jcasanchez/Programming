/* A menu for choosing between a cotization, cashout(corte de caja), or just
saling. You are free to choose the amount of money to start the day, and after
the cashout, the same amount of money has to be. The code must include 
operations of every ITEM, (Discounts if is it necessary).

The program must ask to the user, the payment method, (Cash, debit or credit.) 
At the terminal must include all every operation of each item as well as how 
were it payed(The sum of every ITEM)(ticket). Also must include a .txt file 
with the ticket ready to print.*/

#include <iostream>
#include "revisarPrecio.h"
#include "ticket.h"
#include "hora.h"

int main(int argc, char** argv) {
	
	using namespace std;
	
	cout << "********************************************************************************" << endl;
	cout << "**************       Bienvenido a su ferreteria El Clavito       ***************" << endl;
	cout << "**************    Con los mejores precios, surtido y calidad     ***************" << endl;
	cout << "**************         Y la atencion especial de su amigo        ***************" << endl;
	cout << "**************                Juan Carlos Bodoque                ***************" << endl;
	cout << "********************************************************************************" << endl;
	
	cout << "Seleccione la opcion deseada" << endl;
	
	
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "++++++++++++++++++              Sistema de Cobro              ++++++++++++++++++" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "\n\n" << "Ingrese codigo de su producto" << endl;
	
	int codigoDeProducto;
	cin >> codigoDeProducto;
	float subtotal = 0;
	int contador = 0;
	int descuento = 0;
	if(codigoDeProducto < 1 || codigoDeProducto > 100){
		cout << "Codigo invalido. Intente de nuevo" << endl;
	    cout << "El codigo debe estar entre 1 y 100" << endl;
	}
	else{
		
		
		
  		while(!codigoDeProducto == 0){
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
			else if(contador > 9 & contador <15){
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
		 
	 
 		float totalAPagar = subtotal * 1.16;
 		
		cout << "\n\n\nEl subtotal es: $" << subtotal << endl
			 << "Usted ahorro: $" << descuento << endl
			 << "Total a pagar: $" << totalAPagar;
	
	
	imprimirTicket();
	
	
	hora();
	
	
	return 0;
}