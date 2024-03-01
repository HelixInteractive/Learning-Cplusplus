//This is our first program
#include <iostream>

using namespace std;


int main() {
  int mainIn = 0;
  
  std::cout << "Enter an integer > ";
  std::cin >> mainIn;
  std::cout << mainIn << endl;
  if(mainIn < 0){
    std::cout << "Your number was negative" << endl;
  }else{
    std::cout << "Your number was positive";
  }
    
}
