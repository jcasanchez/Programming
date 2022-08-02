#include <fstream>
#include <iostream>

using namespace std;
 
int imprimirticket(float sub, float desc, float tot) {

  // Variables para guardar los datos del cliente
  char nombre[100];
  char rfc[100];

  cout << "\nImprimiendo su nota de compra" << endl;
  cout << "\nIngrese su nombre: "; 
  cin >> nombre;
  cout << "\nIngrese su RFC: "; 
  cin >> rfc;
  cin.ignore();
  
  // abrimos el archivo para escribir el ticket
  ofstream outfile;
  outfile.open("ticket.txt");

  outfile << "***************************************************" << endl;
  outfile << "*              Ferreteria El Clavito              *" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "***************************************************" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "*                Nota de compra                    " << endl;
  outfile << "***************************************************" << endl;
  outfile << "___________________________________________________" << endl;
  outfile << "El subtotal de su compra es: " << sub << endl;
  outfile << "Usted tiene " << desc << "% de descuento." << endl;
  outfile << "Total a pagar: $" << tot << endl;
  outfile << "Se expide la presente nota a: " << nombre << endl;
  outfile << "En Merida, Yucatan, sucursal Centro" << endl;
  outfile << "RFC: " << rfc << endl;
  cout << "su ticket ha sido guardado, vuelva pronto" << endl;
  
  outfile.close();

  return 0;
}