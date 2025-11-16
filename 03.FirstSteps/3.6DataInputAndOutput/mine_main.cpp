#include <iostream>
#include <string>

int main(){
    // Printing data
    std::cout << "Hello C++" << std::endl;

    int age = 21;
    std::cout << "Age : " << age << std::endl;
 

    std::cerr << "Error Message : Something wrong" << std::endl;
    std::clog << "Log Message : Something happended" << std::endl;

    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;

    //std::cin >> name;
    //std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

    int country;
    std::cout << "Where do you live?" << std::endl;
    std ::cin >> country;

    std::cout << "I've heard great things about " << country << ". I'd like to go sometimes." << std::endl;

    return 0;
}