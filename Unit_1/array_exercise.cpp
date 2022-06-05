// Exercise. Ask the user for 10 numbers and
// print the 1st, 5th and 10th inputs

#include<iostream>

using namespace std;

int main (){
	
	int array [10];

	cout << "Please type 10 numbers: "<< endl;

	// Make a for loop and ask the user for input
	// and store the value in the array
	
	for(int i=0; i<10; i++){ 
	
	cin>> array[i]; 
	}

	cout << "Your 1st input was: "<< array [0]<< endl;
	cout << "Your 5th input was: "<< array [4]<< endl;
	cout << "Your 10th position: "<< array [9]<< endl;

}