#include<iostream>
/* 0 A
   1 
   2 s
   3 t
   4 r
   5 i
   6 n
   7 g
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