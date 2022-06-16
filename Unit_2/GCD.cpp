// Program to calculate GCD of 2 integers
// using the Euclid's method

#include <iostream>
#include <cmath>

using namespace std;

int a, b;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(int a, int b){
	
	cout << "This program calculates the GCD of two integers." << endl;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	
	int result = gcd(a, b);
	
	cout << "The GCD of " << a << " and " << b << " is " << result;
	
	
	
}