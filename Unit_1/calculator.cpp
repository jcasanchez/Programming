// Simple calculator. Ask for two integers and print
// the sum, substraction, product and quotient of both
// numbers

#include <iostream>
using namespace std;

int num1, num2 = 0;

int main(){
    cout << "Please enter one integer" << endl;
    cin >> num1;
    cout << "Please enter a second integer" << endl;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 <<  endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 <<  endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 <<  endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 <<  endl;


    return 0;
}
