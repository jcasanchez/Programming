#include<iostream>
/* 1 A
   2 
   3 s
   4 t
   5 r
   6 i
   7 n
   8 g
*/   
   
using namespace std;

int main(){
	char str[] = "A string";
	char *pc = str;
	
	cout << str[0] << ' ' << *pc << ' ' << pc[3] << endl;
	pc += 2;
	
	cout << *pc << ' ' << pc[2] << ' ' << pc[5];
	
	return 0;
}