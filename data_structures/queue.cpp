#include <iostream>
#include <deque>
#include <queue>

/**
 * Container adaptor FIFO- uses an encapsulated object of a specific container class as its underlying container (deque by default).
 *
 * Dynamic - expands and contracts on both ends (front and back).
 *
 * Scattered storage - elements are stored in different chunks of memory locations, but still allows constant time random access to elements.
 *
 * Time Complexity:
 * Access - front():            O(1) - constant
 *        - back():             O(1) - constant
 *
 * Insert - push():             O(1) - constant
 *
 * Erase - pop():               O(1) - constant
 */

int main(){
    std::deque<int> myDeque = {1, 3, 4, 5, 6, 7};
    std::queue<int, std::deque<int>> myQueue(myDeque);

    //Accessors
    std::cout << "Front: " << myQueue.front() << std::endl;
    std::cout << "Back: " << myQueue.back() << std::endl;

    //Modifiers
    myQueue.push(8);
    std::cout << "Back after push: " << myQueue.back() << std::endl;

    myQueue.pop();
    std::cout << "Front after pop: " << myQueue.front() << std::endl;
}