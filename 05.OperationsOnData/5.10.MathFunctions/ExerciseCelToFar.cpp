#include <iostream>

int main(){
    double celsius;
    std::cout << "Please enter a degree value in Celsius: ";
    std::cin >> celsius;
    std::cout << celsius << std::endl;
    double fahr = (9.0 / 5) * celsius + 32;
    std::cout << celsius;
    std::cout << " Celsius is ";
    std::cout <<fahr;
    std::cout <<" in Fahrenheit " << std::endl;
    return 0;
}