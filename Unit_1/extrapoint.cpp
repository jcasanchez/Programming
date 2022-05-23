#include <iostream>
using namespace std;

int main() {
  int time;
  cout << "What time is it? 24-hour format, please\n";
  cin >> time;

   if (time == 12){
    cout << "It's noon!\n";
  } else {
    
  if (time == 0 || time == 24){
  cout << "It's midnight!\n";
    }
  else {
    if (time < 12){
    cout << "Good morning!\n";
  } else {
    if (time < 19){
      cout << "Good evening!\n";
    }
    else {
      cout << "Good night!\n";
     }
    }
   }
 }
}
