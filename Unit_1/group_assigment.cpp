#include <iostream>
#include <ctime>

using namespace std;

// Main function that creates a 2D array and prints it
int main() {
	
    srand(time(NULL));

    int array [10][10];

	// Use 2 nested for loops to create a 10x10 array
	// using the rand funcion
    for (int i = 0; i < 10; ++i) {
        
		for(int j = 0; j < 10; ++j) {
			
			array[i][j] = rand() % 200;
			
		}
    }

    // Print array as grid
    for (int i = 0; i < 10; ++i) {
    	
        for(int j = 0; j < 10; ++j) {
        	
			cout << array[i][j] << " ";
		}
		cout << '\n';
    }

    cout << endl;
    
    // Find the largest element using 2 nested for loops
    // We set the largest as the first element and then
    // we iterate through the array and compare every element
    // to our first largest number
    
    int largest = array[0][0];
    
    for (int i = 0; i < 10; ++i) {
    	for(int j = 0; j < 10; ++j) {
        	if(array[i][j] > largest){
        		largest = array[i][j];
			}
			
		}
	}
	
	// Again we go for a nested for loops to know
	// how many times the largest number is repeated
	int howmany = 0;
	
	for (int i = 0; i < 10; ++i) {
    	for(int j = 0; j < 10; ++j) {
        	if(array[i][j] == largest){
        		++howmany;
			}
			
		}
	}
    
    cout << "The largest number is: " << largest << endl;
    cout << "This number repeats " << howmany << " times" << endl;
    return 0;
}  
    
    
    
    
    
    
    
    
    

    
    
    
