#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    std::cout << "Hello World!" << std::endl;
    // constexpr int value = get_value();
    // std::cout << "value : " << value << std::endl;
    return 0;
}