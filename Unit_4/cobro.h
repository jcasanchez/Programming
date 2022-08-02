#include <iostream>
#include "ticket.h"

using namespace std;

// Variables para almacenar la suma de los precios
// el contador nos sirve para acumular la cantidad de productos vendidos
float subtotal = 0;
int contador = 0;
float descuento = 0;

void cobro(){

  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "++++++++++          Sistema de Cobro          ++++++++++" << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "\n\n" << "Ingrese precio\n" << endl;
  cout << "Para terminar, ingrese 0\n" << endl;

  // Preguntamos el precio de cada articulo
  float precio;
  cin >> precio;

  // Estructura while para definir el porcentaje de descuento que se aplicara
  // Mas de 15 productos obtiene el 15%
  // Entre 10 y 14 el descuento es de 10%
  // Menos de 10 articulos no hay descuento
  while(precio > 0.0){
    subtotal = subtotal + precio;
    contador++;

    if(contador > 14){
      descuento = 0.15;
    }
    else if(contador > 9){
      descuento = 0.1;
    }
  
    cout << "\n" << "Ingrese precio" << endl;
    cout << "Para terminar, ingrese 0\n" << endl;
    cin >> precio;
    
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: " << descuento << endl;
  }
  
  // Una vez que se hayan capturado los articulos, mostramos un resumen
  cout << "El total de su compra es: $" << subtotal << endl;
  cout << "Total con descuento: $" << subtotal*(1-descuento) << endl;

  float totalapagar = subtotal * 1.16;
  
  cout << "Total a pagar: $" << totalapagar << endl;
  cout << "\tForma de pago" << endl;
  cout << "Pago en efectivo, ingrese 1" << endl;
  cout << "Pago con tarjeta, ingrese 2" << endl;
  cout << "Pago con cheque, ingrese 3" << endl;
  cout << "Su pago: " << endl;

  int formadepago;
  cin >> formadepago;

  switch(formadepago){
    case 1:
      cout << "Ha seleccionado pago en efectivo" << endl;
      break;
    case 2:
      cout << "Ha seleccionado pago con tarjeta" << endl;
      break;
    case 3:
      cout << "Ha seleccionado pago con cheque" << endl;
      break;
  }
  // Llamamos a la funcion para imprimir el ticket
  imprimirticket(subtotal, descuento, totalapagar);
}