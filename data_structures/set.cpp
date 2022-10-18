#include <iostream>
#include <set>

/**
 * Associative container - elements are accessed by their key, not by their position in the container .
 *
 * Dynamic - uses an allocator object to dynamically handle its storage needs.
 *
 * Scattered storage -
 *
 * Time Complexity:
 * Access -
 *
 * Insert - insert():           O(log n) - logarithmic
 *
 * Erase - erase():             O(1) - constant amortised
 */

void printSet(std::set<int> s){
    for(auto it = s.begin(); it != s.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::set<int> mySet = {1, 3, 4, 5, 6, 7};
    printSet(mySet);

    //Modifiers
    auto it = mySet.begin(); //points to 1
    it++; //points to 3
    mySet.insert(it, 2);
    std::cout << "After insert: ";
    printSet(mySet);

    it = mySet.begin(); //points to 1
    it++; //points to 2
    mySet.erase(it);
    std::cout << "After erase: ";
    printSet(mySet);
}