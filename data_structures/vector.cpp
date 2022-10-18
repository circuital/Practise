#include <iostream>
#include <vector>

/**
 * Sequence container - elements are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence, directly.
 *
 * Dynamic - uses an allocator object to dynamically handle its storage needs. Expands and contracts on one end (back).
 *
 * Contiguous storage - elements are stored in contiguous memory locations, allowing constant time random access to elements.
 *
 * Time Complexity:
 * Access - []operator:         O(1) - constant
 *        - at():               O(1) - constant
 *        - front():            O(1) - constant
 *        - back():             O(1) - constant
 *
 * Insert - insert():           O(n) - linear
 *        - push_back():        O(1) - constant amortised, reallocation may happen
 *
 * Erase - erase():             O(n) - linear
 *       - pop_back():          O(1) - constant
 */

void printVector(std::vector<int> v){
    for(auto it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> myVector = {1, 3, 4, 5, 6, 7};
    printVector(myVector);

    //Accessors
    std::cout << "Second element: " << myVector[1] << std::endl;
    std::cout << "Fourth element: " << myVector.at(3) << std::endl;
    std::cout << "Front: " << myVector.front() << std::endl;
    std::cout << "Back: " << myVector.back() << std::endl;

    //Modifiers
    auto it = myVector.begin(); //points to 1
    it++; //points to 3
    myVector.insert(it, 2);
    std::cout << "After insert: ";
    printVector(myVector);

    it = myVector.begin(); //points to 1
    it++; //points to 2
    myVector.erase(it);
    std::cout << "After erase: ";
    printVector(myVector);

    myVector.push_back(8);
    std::cout << "After push_back: ";
    printVector(myVector);

    myVector.pop_back();
    std::cout << "After pop_back: ";
    printVector(myVector);
}