#include <iostream>
#include <deque>

/**
 * Sequence container - elements are ordered in a strict linear sequence. Individual elements are accessed by their position, directly.
 *
 * Dynamic - uses an allocator object to dynamically handle its storage needs. Expands and contracts on both ends (front and back).
 *
 * Scattered storage - elements are stored in different chunks of memory locations, but still allows constant time random access to elements.
 *
 * Time Complexity:
 * Access - []operator:         O(1) - constant
 *        - at():               O(1) - constant
 *        - front():            O(1) - constant
 *        - back():             O(1) - constant
 *
 * Insert - insert():           O(n) - linear
 *        - push_front():       O(1) - constant
 *        - push_back():        O(1) - constant
 *
 * Erase - erase():             O(n) - linear
 *       - pop_front():         O(1) - constant
 *       - pop_back():          O(1) - constant
 */

void printDeque(std::deque<int> d){
    for(auto it = d.begin(); it != d.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::deque<int> myDeque = {1, 3, 4, 5, 6, 7};
    printDeque(myDeque);

    //Accessors
    std::cout << "Second element: " << myDeque[1] << std::endl;
    std::cout << "Fourth element: " << myDeque.at(3) << std::endl;
    std::cout << "Front: " << myDeque.front() << std::endl;
    std::cout << "Back: " << myDeque.back() << std::endl;

    //Modifiers
    auto it = myDeque.begin(); //points to 1
    it++; //points to 3
    myDeque.insert(it, 2);
    std::cout << "After insert: ";
    printDeque(myDeque);

    it = myDeque.begin(); //points to 1
    it++; //points to 2
    myDeque.erase(it);
    std::cout << "After erase: ";
    printDeque(myDeque);

    myDeque.push_front(0);
    std::cout << "After push_front: ";
    printDeque(myDeque);

    myDeque.pop_front();
    std::cout << "After pop_front: ";
    printDeque(myDeque);

    myDeque.push_back(8);
    std::cout << "After push_back: ";
    printDeque(myDeque);

    myDeque.pop_back();
    std::cout << "After pop_back: ";
    printDeque(myDeque);
}