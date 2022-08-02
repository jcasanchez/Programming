// Juan Carlos Avila Sanchez
// Datos 2B

#include <iostream>
#include "corte.h"
#include "cotizacion.h"
#include "cobro.h"



int main(int argc, char** argv) {
	
	using namespace std;
	
  // Mensaje de bienvenida y menu
  cout << "********************************************************" << endl;
	cout << "*        Bienvenido a su ferreteria El Clavito         *" << endl;
	cout << "*      Con los mejores precios, surtido y calidad      *" << endl;
	cout << "*          Y la atencion especial de su amigo          *" << endl;
	cout << "*                 Juan Carlos Bodoque                  *" << endl;
	cout << "********************************************************" << endl;
	
	cout << "Para realizar un cobro, ingrese............1" << endl;
  cout << "Para realizar una cotizacion, ingrese......2" << endl;
  cout << "Para realizar corte de caja, ingrese.......3" << endl;
  cout << "Seleccione la opcion deseada: " << endl;

  int opcion;
  cin >> opcion;

  // Switch para escoger opcion 
    switch(opcion){
    case 1:
      cobro();
      break;
    case 2:
      cotizacion();
      break;
    case 3:
      corte();
      break;
  }

  return 0;
}