#include <iostream>

/**
 * Pointers store addresses of variables or memory addresses.
 * References are alternative names to existing variables, NOT copies of them.
 *
 * Both references and pointers can be used to change local variables of one function inside another function.
 * Both of them can also be used to avoid copying of big objects when passed as arguments to functions or when returned
 * from functions, to get efficiency gain. Despite the above similarities, here are some differences between
 * references and pointers:
 *
 * 1. A pointer can be declared as void but a reference can never be void
 * 2. References cannot be updated (reference another variable), but pointers can.
 * 3. References cannot be NULL, but pointers can.
 * 4. Members of an object reference can be accessed with the dot operator (‘.’), unlike pointers where the arrow
 *    operator (->) is needed to access members.
 */

int main() {
    int my_variable = 10;
    int* my_pointer = &my_variable; //Here & means address
    int& my_reference = my_variable; //Here & means reference.

    std::cout << "Variable value: " << my_variable << std::endl;
    std::cout << "Variable value: " << *my_pointer << std::endl; //Dereferencing
    std::cout << "Variable value: " << my_reference << std::endl;

    std::cout << "Variable address: " << &my_variable << std::endl;
    std::cout << "Variable address: " << my_pointer << std::endl;
    std::cout << "Variable address: " << &my_reference << std::endl;
}
