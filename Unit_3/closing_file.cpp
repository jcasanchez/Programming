// Closing a file

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream new_file;
	new_file.open("New_file2.txt", ios::out);
	new_file.close();
	return 0;
}