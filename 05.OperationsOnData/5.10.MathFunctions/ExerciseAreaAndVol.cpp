#include <iostream>

int main(){
    // variable declaration
    double width, length, height;

    //Welcome message
    std::cout << "Welcome to box calculator. Please type in length, width and height information : " << std::endl;

    //Collect data into var
    std::cout << "Length : ";
    std::cin >> length;
    std::cout << "Width : ";
    std::cin >> width;
    std::cout << "Height : ";
    std::cin >> height;

    //Compute area and volume
    double base_area = width * length;
    double volume = base_area * height;

    std::cout << "The base area is : " << base_area << std::endl;
    std::cout << "The volume is : " << volume << std:: endl;

    
    return 0;
}