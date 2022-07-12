#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream new_file;
	new_file.open("new_file.txt", ios::out);
	if(!new_file){
		cout << "File creation failed";
	}
	else{
		cout << "File created" << endl;
		//new_file.close();
	}
	
	new_file << "Learning file handling";
	new_file.close();
	return 0;
}