#include <iostream>
#include <deque>
#include <stack>

/**
 * Container adaptor LIFO - uses an encapsulated object of a specific container class as its underlying container (deque by default).
 *
 * Dynamic - expands and contracts on one end (back).
 *
 * Scattered storage - elements are stored in different chunks of memory locations, but still allows constant time random access to elements.
 *
 * Time Complexity:
 * Access - top():              O(1) - constant
 *
 * Insert - push():             O(1) - constant
 *
 * Erase - pop():               O(1) - constant
 */

int main(){
    std::deque<int> myDeque = {1, 3, 4, 5, 6, 7};
    std::stack<int, std::deque<int>> myStack(myDeque);

    //Accessors
    std::cout << "Top: " << myStack.top() << std::endl;

    //Modifiers
    myStack.push(8);
    std::cout << "Top after push: " << myStack.top() << std::endl;

    myStack.pop();
    std::cout << "Top after pop: " << myStack.top() << std::endl;
}