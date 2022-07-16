//Con el programa visto en clase, completar el programa 
//de la librería para acceder a un libro, con titulo y 
//autor, y guardar la información en un fichero 
//(puede ser .dat o .txt). Mostrar la información del 
//libro seleccionado en la terminal. 

#include<stdio.h>
#include<iostream>
#include "string.h"
#include<fstream>

using namespace std;
int size;
int cols = 2;
string** libros;

// function to check if database exists
// otherwise, create it
void createFile(){
	fstream new_file;
	new_file.open("database.txt", ios::out);
	if(!new_file){
		cout << "File creation failed";
	}
	else{
		cout << "\t    File sucessfully created!\n" << endl;
		
	}
	
	//new_file << "Learning file handling";
	new_file.close();
}

//function to ask for user input
void userInput(){
	cout <<"How many books do yo want to enter?" << endl ;
    string entry;
    getline(cin, entry);
    size = stoi(entry);
    libros = new string*[size];
    
	cout << "Type book information: " << endl;
	string title, author;
	
   // struct to store data
   // we set the lenght to 100 characters
    struct books{
		char title[100];
		int year;
		char author[100];
		} libros[size];
		
	// Declare that we are dealing with streams
	// Our variable will point to a stream that we later
	// define to be a text file read from disk
	FILE* mydatabase;
	//int i;
	//, numero=0;
	
	// Create a variable which points to our database file.
	// wt stands for Write in Text mode. The contents are destroyed.
	mydatabase = fopen("database.txt", "wt");
		
		// for loop for user input. We use the size variable
		//declared earlier to iterate through the number of books
		// for clarity, we start i=1 so the code is easier to read
		for(int i=1; i<size + 1; i++){
			
			cout<<"****** Book "<<i<<" ******\n";
		
			puts("\nTitle: ");
			gets(libros[i].title);
			fprintf(mydatabase, "%s \n", libros[i].title);
			
			puts("\nPublication date: ");
			scanf("%d", &libros[i].year);
			//getchar();
			fprintf(mydatabase, "%d \n", libros[i].year);
			
			puts("\nAuthor: ");
			gets(libros[i].author);	
			fprintf(mydatabase, "%s \n", libros[i].author);	
		}
					
	}
			//fclose(mydatabase);


void printToScreen(){
int item;
	string *bookTitle;
	cout << "Please type what book you want to see: ";
    cin >> item;
    
	bookTitle = libros[item - 1];
	string *bookAuthor = bookTitle + 1;
	cout << "Your book is " + *(bookTitle) + " by " + *(bookAuthor) << endl;	
}
int main(){
	
	cout << "*******************************************************" << endl;
	cout << "* Welcome to you Personal Library Management Software *" << endl;
	cout << "*******************************************************" << endl;
	cout << "\n";
	cout << "  Let's first create your database. If a database file " << endl;
	cout << "  is already present, we will use it, otherwise a new  "<< endl;
	cout << "       otherwise a new file will be created\n\n" << endl;
	
	createFile();
    userInput();
    printToScreen();
    
    
    
	

}
	