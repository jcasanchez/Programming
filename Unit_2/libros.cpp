// Class June 16th, 2022

#include<stdio.h>
#include<iostream>
#include "string.h"

using namespace std;

int main(){
    
    string* title = NULL; 
    string* authors = NULL;

    int size; 

    cout <<"How many books do yo want to enter?" << endl ;

    string entry;

    getline(cin, entry);

    size = stoi(entry);
    
    title = new string[size];

    authors = new string[size];

    cout << "Type book information: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"\n****** Book "<< i+1<<" ******\n";
        cout<<"Title: ";
        getline(cin, title[i]); 
        cout<<"Author: ";
        getline(cin, authors[i]);
    }
    

}