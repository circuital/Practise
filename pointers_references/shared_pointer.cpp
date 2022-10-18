#include <iostream>

/**
 * A shared pointer points to an object, which multiple other pointers can also point to. We say that all these pointers
 * share ownership of the object. To check how many pointers are sharing (pointing to) the same object, we have to use
 * use_count().
 */

int main(){
    int my_variable = 10;

    std::shared_ptr<int> p1;
    p1 = std::make_shared<int>(my_variable);
    std::cout << "Variable value: " << *p1 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p1 << std::endl;

    std::shared_ptr<int> p2;
    p2 = p1;
    std::cout << "Variable value: " << *p2 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p2 << std::endl;

    std::cout << "Use count: " << p1.use_count() << std::endl;
    std::cout << "Use count: " << p2.use_count() << std::endl;
}

