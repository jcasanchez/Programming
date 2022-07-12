// Modificar programa para que escriba a un archivo de texto
// e imprima el titulo y autor solicitado por el usuario
// sin punteros
// Juan Carlos Avila Sanchez
// Data 2B

#include<stdio.h>
#include<iostream>
#include "string.h"

using namespace std;
int size;
int cols = 2;
string** libros;
int item;

int crearMatriz(){
	cout <<"How many books do yo want to enter?" << endl ;
    string entry;
    getline(cin, entry);
    size = stoi(entry);
    libros = new string*[size];
}

int rellenarMatrix(){
	cout << "Type book information: " << endl;
	string title, author;
	
    for (int i = 0; i < size; i++)    {
        libros[i] = new string [cols];
		cout<<"\n****** Book "<< i+1<<" ******\n";
        cout<<"Title: ";
        getline(cin, title); 
        cout<<"Author: ";
        getline(cin, author);
        libros[i][0] = title;
        libros[i][1] = author;
    }
}

int main(){
	
	
    crearMatriz();
    
    rellenarMatrix();
    
	int item;
	string *bookTitle;
	
	cout << "Please type what book you want to see: ";
    cin >> item;
    
	bookTitle = libros[item - 1];
	string *bookAuthor = bookTitle + 1;
	//cout << "Your book is " + *(bookTitle) + " by " + *(bookAuthor) << endl;
    
    for(int i=0; i<= item;i++){
    	cout << libros[2][1];	
    	//cout << libros[i][1];
	}
	


}
	