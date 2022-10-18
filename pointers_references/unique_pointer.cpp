#include <iostream>

/**
 * A unique pointer points to an object, which no other pointer can point to. To make another pointer point to this
 * object, we have to use std::move().
 */

int main(){
    int my_variable = 10;

    std::unique_ptr<int> p1;
    p1 = std::make_unique<int>(my_variable);
    std::cout << "Variable value: " << *p1 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p1 << std::endl;

    std::unique_ptr<int> p2;
    p2 = std::move(p1);
    std::cout << "Variable value: " << *p2 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p2 << std::endl;
}
