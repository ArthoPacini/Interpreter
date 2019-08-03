#include "Interpreter.h"
#include <iostream>

int main()
{
    //Create object with expression
    art::Interpreter interpreter("a+b+5");
    std::cout << "Calculating a+b+5" << std::endl;
    int result;

    //Get result
    result = interpreter.getResult({4,6});
    std::cout << "Result for a = 4 and b = 6: " << result << std::endl;

    //Get result
    result = interpreter.getResult({2,3});
    std::cout << "Result for a = 2 and b = 3: " << result << std::endl;
}