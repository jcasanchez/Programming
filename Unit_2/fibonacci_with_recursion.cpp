//fibonacci using recursion

#include<iostream>

using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n;
    
    cout << "Please how many elements of Fibonacci series you want to know" << endl;
    cin >> n;
    
    for(int i;i<n; ++i){
    	cout << fib(i) << " ";	
	}
    
    
    return 0;
}