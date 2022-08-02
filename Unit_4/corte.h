#include <fstream>
#include <iostream>

using namespace std;
 
int corte() {

  // Variables para almacenar cuantas ventas hubo y
  // el monto total de las mismas
  int ventas;
  float monto;
 
  // Abrimos el archivo para escribir los datos
  // Escribimos el resumen
  ofstream outfile;
  outfile.open("corte.txt");

  cout << "\nCorte de Caja" << endl;
  cout << "\nDigite las ventas totales: "; 
  cin >> ventas;
   
  cout << "\nCual es el monto total de ventas del dia?: $"; 
  cin >> monto;
  
  float iva = monto/1.16;
   
  outfile << "***************************************************" << endl;
  outfile << "*              Ferreteria El Clavito              *" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "***************************************************" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "*                Corte de Caja                     " << endl;
  outfile << "***************************************************" << endl;
  outfile << "___________________________________________________" << endl;
  outfile << "Numero de transacciones: " << ventas << endl;
  outfile << "Total de ingresos: $" << monto << endl;
  outfile << "IVA a declarar: $" << monto - iva << endl;
  outfile << "Total sin IVA: $" << iva << endl;
  
  outfile.close();

  // Volvemos a abrir el archivo pero esta vez
  // para imprimirlo en pantalla
  ifstream inFile("corte.txt");
  string line;

  while(inFile){
    getline(inFile, line);
    cout << line << endl;
  }

  inFile.close();

  return 0;
}
