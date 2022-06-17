// Sum of n naturals
// also know as a type of arithmetic series

#include<iostream>
using namespace std;

int sum(int n);

int sum(int n) {
    if(n != 0)
        return n + sum(n - 1);
    return 0;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << sum(n);

    return 0;
}

