#include <iostream>

/**
 * A weak pointer points to an object, which multiple other pointers can also point to. However, the weak pointer does
 * not share ownership over the object, it only observes the object, and can therefor not access the data of the object.
 * To give the pointer access to the data of the object, we create a shared pointer from it, using lock().
 */

int main(){
    int my_variable = 10;

    std::shared_ptr<int> p1;
    p1 = std::make_shared<int>(my_variable);
    std::cout << "Variable value: " << *p1 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p1 << std::endl;

    std::weak_ptr<int> p2;
    p2 = p1;
    std::shared_ptr<int> p3 = p2.lock();
    std::cout << "Variable value: " << *p3 << std::endl; //Dereferencing
    std::cout << "Variable address: " << p3 << std::endl;

    std::cout << "Use count: " << p1.use_count() << std::endl;
    std::cout << "Use count: " << p3.use_count() << std::endl;
}

