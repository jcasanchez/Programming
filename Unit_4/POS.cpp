/* A menu for choosing between a cotization, cashout(corte de caja), or just
saling. You are free to choose the amount of money to start the day, and after
the cashout, the same amount of money has to be. The code must include 
operations of every ITEM, (Discounts if is it necessary).

The program must ask to the user, the payment method, (Cash, debit or credit.) 
At the terminal must include all every operation of each item as well as how 
were it payed(The sum of every ITEM)(ticket). Also must include a .txt file 
with the ticket ready to print.*/

#include <iostream>
#include "revisarprecio.h"
#include "ticket.h"
#include "hora.h"
#include "cobro.h"



int main(int argc, char** argv) {
	
	using namespace std;
	
	cout << "********************************************************" << endl;
	cout << "*        Bienvenido a su ferreteria El Clavito         *" << endl;
	cout << "*      Con los mejores precios, surtido y calidad      *" << endl;
	cout << "*          Y la atencion especial de su amigo          *" << endl;
	cout << "*                 Juan Carlos Bodoque                  *" << endl;
	cout << "********************************************************" << endl;
	
	cout << "Para realizar un cobro, ingrese 1" << endl;
  cout << "Para realizar un cobro, ingrese 1" << endl;
  cout << "Para realizar un cobro, ingrese 1" << endl;
  cout << "Para realizar un cobro, ingrese 1" << endl;
  cout << "Seleccione la opcion deseada: " << endl;

  //int opcion;
  //cin >> opcion;

  //switch(opcion){
  //  case 1:
  //    cobro();
  //    break;
  //}
	
	revisarprecio();
	 
	 
 	float totalAPagar = subtotal * 1.16;
 		
		cout << "\n\n\nEl subtotal es: $" << subtotal << endl
			 << "Usted ahorro: $" << descuento << endl
			 << "Total a pagar: $" << totalAPagar;
	
	
	imprimirTicket(subtotal, descuento, totalAPagar);
	
	
	//hora();
	
	
	return 0;
}
