#include<iostream>

int main(){


    int number1 = 5;
    int number2 = 6;

    int sum_result = number1 + number2;
    int subtracion_result = number1 - number2;
    int mult_result = number1 * number2;
    int division = number2 / number1;
    int modulus = number2 % number1;

    std::cout << 'Result sum : ' << sum_result << std :: endl;
    std::cout << 'Result substraction : ' << subtracion_result << std::endl;
    std::cout << 'Result mult : ' << mult_result << std :: endl;
    std::cout << 'Result Division : ' << division << std::endl;
    std::cout << 'Result Modulus : ' << modulus << std::endl;

    return 0;
}