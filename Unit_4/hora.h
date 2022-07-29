#include <iostream>
#include <chrono>
#include <ctime>    

using namespace std;

int hora(){
	
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();
 
    std::chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);
 
    cout << "Lugar de expedicion: \t\t Sucursal Centro\n" << endl;
	cout << ctime(&end_time) << endl;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s" << endl;
    cout << std::endl;
    
    return 0;
}