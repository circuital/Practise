#include <iostream>
#include <list>

/**
 * Sequence container - elements are stored in a strict linear sequence. Individual elements are accessed by their position in this sequence, by iteration.
 *
 * Dynamic - uses an allocator object to dynamically handle its storage needs.
 *
 * Doubly-linked - elements are stored in different memory locations. Each element keeps information on how to locate the previous and the next element.
 *
 * Time Complexity:
 * Access - front():            O(1) - constant
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

void printList(std::list<int> l){
    for(auto it = l.begin(); it != l.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::list<int> myList = {1, 3, 4, 5, 6, 7};
    printList(myList);

    //Accessors
    std::cout << "Front: " << myList.front() << std::endl;
    std::cout << "Back: " << myList.back() << std::endl;

    //Modifiers
    auto it = myList.begin(); //points to 1
    it++; //points to 3
    myList.insert(it, 2);
    std::cout << "After insert: ";
    printList(myList);

    it = myList.begin(); //points to 1
    it++; //points to 2
    myList.erase(it);
    std::cout << "After erase: ";
    printList(myList);

    myList.push_front(0);
    std::cout << "After push_front: ";
    printList(myList);

    myList.pop_front();
    std::cout << "After pop_front: ";
    printList(myList);

    myList.push_back(8);
    std::cout << "After push_back: ";
    printList(myList);

    myList.pop_back();
    std::cout << "After pop_back: ";
    printList(myList);
}