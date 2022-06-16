// Factorial, as seen in class June 14 2022

#include <iostream>

using namespace std;

int factorial(int);

int main(){
	
	int n, result;
	
	cout << "Enter a non negative integer: ";
	cin >> n;
	result = factorial(n);
	cout << "Factorial of " << n << " is: " << result;
	return 0;
}

int factorial(int n){
	
	if(n>2){
		return n * factorial(n-1);
	}
	else{
		return n;
	}
}