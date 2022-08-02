#include <iostream>

using namespace std;

void cotizacion(){

  // variables para almacenar la cantidad de productos a cotizar
  // y el precio de cada uno de ellos
  float cot_precio;
  int cot_cantidad;
  int descuento;
  
  cout << "Indique el precio del producto que le interesa" << endl;
  cin >> cot_precio;
  cout << "Indique cuantas unidades le interesa comprar" << endl;
  cin >> cot_cantidad;

  // condicionales para establecer el porcentaje de descuento
  // Mas de 10 tiene 15% de descuento
  // entre 10 y 14 tiene 10% de descuento
  // Menos de 10 no hay descuento
  if(cot_cantidad > 14){
    cout << "Usted tiene 15% de descuento por compra de mayoreo" << endl;
    descuento =15;
  }
  else if(cot_cantidad > 9){
    cout << "Usted tiene 10% de descuento por compra de mayoreo" << endl;
    
    descuento =10;
  }

  // Variables para calcular la cotizacion
  // Precio total, precio ya con descuento, si aplica
  // Impuestos y total
  float x = ((100 - descuento));
  float desc_final = x/100;
  float subtotal = cot_cantidad * cot_precio;
  float final = subtotal * desc_final;
  float final_con_iva = final * 1.16;

  // Abrimos el archivo para guardar la cotizacion
  ofstream outfile;
  outfile.open("cotizacion.txt");

  outfile << "***************************************************" << endl;
  outfile << "*              Ferreteria El Clavito              *" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "***************************************************" << endl;
  outfile << "*                                                 *" << endl;
  outfile << "*                  Cotizacion                     *" << endl;
  outfile << "***************************************************" << endl;
  outfile << "___________________________________________________" << endl;
  outfile << "\nUsted desea " << cot_cantidad << " piezas, c/u $" << cot_precio << endl;
  outfile << "El descuento aplicable es de: " << descuento << "%" << endl;
  outfile << "El subtotal es: $" << final << endl;
  outfile << "El precio final es $" << final_con_iva << " IVA incluido" << endl;
  
  outfile.close();

  // Una vez que que se ha guardado la cotizacion, 
  // imprimimos el archivo en pantalla
  cout << "La cotizacion se ha guardado en el archivo cotizacion.txt" << endl;
  cout << "y se presenta a continuacion:\n\n" << endl;
  ifstream inFile("cotizacion.txt");
  string line;

  while(inFile){
    getline(inFile, line);
    cout << line << endl;
  }

  inFile.close();
}