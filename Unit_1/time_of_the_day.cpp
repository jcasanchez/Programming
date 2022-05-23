#include <iostream>
using namespace std;

int main() {
  int time = 12;
  if (time < 18){
    cout << "Good Day\n";
    if(time == 12){
      cout << "It's noon\n";
    }
  }else{
    cout << "Good Evening\n";
  }
}
