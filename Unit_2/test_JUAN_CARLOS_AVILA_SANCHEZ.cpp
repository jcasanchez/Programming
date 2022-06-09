// JUAN CARLOS AVILA SANCHEZ
//
//
// Triangulo de Pascal
// El triangulo de pascal se pude contruir siguiendo la formula
// del binomio de Newton.
//
// El Teorema del Binomio de Newton sirve para obtener los 
// coeficientes de un binomio de la forma (Ax + y)^n, donde
// A es el coeficiente de x, "y" es el termino independiente del 
// binomio y n es la potencia a la que se quiere elevar el binomio.
// El ejemplo mas sencillo es (x+1)^2 que sabemos que los coeficientes
// con 1 2 1, es decir x^2 + 2x + 1 y A=1, y=1 y n=2.

// El triangulo de Pascal es un caso especial del binomio de Newton 
// en el que el coeficiente A y el termino independiente y son iguales
// a 1, como mencionamos anteriormente y entonces el problema se 
// reduce a pedir al usuario la potencia deseada n e imprimir 
// n + 1 lineas. Dado que el calculo de cada elemento del triangulo
// requeriere factoriales, entocnes necesitamos una funcion para
// calcular dicho factorial, y luego otra funcion que calculara
// cada elemento con la formula n!/k!(n-k)!

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
// primero usamos una funcion para calcular el factorial de 
// un numero

int factorial(int n) {
    
    int fact = 1;
    
    for (int i = 2; i <= n; i++)
        fact *= i;       
    return fact;
}
 
// Aqui usamos una funcion que nos permite usar la funcion de 
// factorial anterior para imprimir los coeficientes de (x+1)^n
// con la formula mencionada antes n!/k!(n-k)!
// Cada iteracion de este for va a imprimir un solo elemento
// de cada linea y se ejecutara n+1 veces. 
// Hay que recordar que cada termino es una combinacion nCr que vimos
// en las clases de probabilidad de la prepa.


void serie_de_potencia(int n) {    
    
    int fact_n = factorial(n);
 
    
    for (int k = 0; k < n + 1; k++) {
    
    // calculamos los factoriales necesarios
    // para calcular la combinacion nCr

        int fact_n_menos_k = factorial(n - k);
        int fact_k = factorial(k);

     // calculamos nCr

        cout << (fact_n) /
                 (fact_n_menos_k * fact_k) << " ";
    }
}
 
// funcion main. Usamos un ciclo for que va a solicitar
// un entero n y en cada iteracion el ciclo llamara
// a la funcion series para imprimirla

int main()
{
	int n;

	cout << "Enter how many lines you want" << endl;
	cin >> n;

    for(int i = 1; i <= n; i++){
    	serie_de_potencia(i);
    	cout << "\n";	
    }
    
    return 0;
}

// A final de cuentas, solo usamos una funcion para calcular el factorial
// otra funcion para calcular n!/k!(n-k)! y al ultimo la funcion main
// que no es mas que un for para imprimir tantas lineas como ingrese el 
// usuario. Falto dejarlo en forma de triangulo, se que se hace con setw y setfill
// del iomanip pero no me dio tiempo