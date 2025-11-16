#include <iostream>

int main(){
   
   //Compile time error exxample
   std::cout << "Hello Word!" << std::endl;

   //Run time error example
   int value = 7/0;
   std::cout << "value : " << value << std::endl;

    return 0;
}