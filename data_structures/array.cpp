#include <iostream>
#include <array>

/**
 * Sequence container - elements are stored in a strict linear sequence. Individual elements are accessed by their position in this sequence, directly.
 *
 * Static - uses implicit constructors and destructors to allocate the required storage locally.
 *
 * Contiguous storage - elements are stored in contiguous memory locations, allowing constant time random access to elements.
 *
 * Time Complexity:
 * Access - []operator:         O(1) - constant
 *        - at():               O(1) - constant
 *        - front():            O(1) - constant
 *        - back():             O(1) - constant
 */

void printArray(std::array<int, 6> a){
    for(auto it = a.begin(); it != a.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::array<int,6> myArray = {1, 3, 4, 5, 6, 7};
    printArray(myArray);

    //Accessors
    std::cout << "Second element: " << myArray[1] << std::endl;
    std::cout << "Fourth element: " << myArray.at(3) << std::endl;
    std::cout << "Front: " << myArray.front() << std::endl;
    std::cout << "Back: " << myArray.back() << std::endl;
}
