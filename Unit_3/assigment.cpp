// Class June 21th, 2022
// Modification to ask for user input
// to print the selected book

// Juan Carlos Avila Sanchez
// Data 2B

#include<stdio.h>
#include<iostream>
#include "string.h"

using namespace std;

int main(){
	
	int cols = 2;
	string** libros;
    
    int size; 
    cout <<"How many books do yo want to enter?" << endl ;
    string entry;
    getline(cin, entry);
    size = stoi(entry);
    libros = new string*[size];
    
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
    
	int item;
	string *bookTitle;
	
	cout << "Please type what book you want to see: ";
    cin >> item;
    
	bookTitle = libros[item - 1];
	string *bookAuthor = bookTitle + 1;
	cout << "Your book is " + *(bookTitle) + " by " + *(bookAuthor) << endl;

}
	