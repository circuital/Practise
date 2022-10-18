#include <iostream>
#include <map>

/**
 * Associative container - elements are accessed by their key, not by their position in the container.
 *
 * Dynamic - uses an allocator object to dynamically handle its storage needs.
 *
 * Contiguous storage -
 *
 * Time Complexity:
 * Access - []operator:         O(log n) - logarithmic
 *        - at():               O(log n) - logarithmic
 *
 * Insert - insert():           O(log n) - logarithmic
 *
 * Erase - erase():             O(1) - constant amortized
 */

void printMap(std::map<int, char> m){
    for(auto it = m.begin(); it != m.end(); it++){
        std::cout << it->first << it->second << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::map<int, char> myMap = {{1,'a'}, {3,'c'}, {4,'d'}, {5,'e'}, {6,'f'}, {7,'g'}};
    printMap(myMap);

    //Accessors
    std::cout << "Key 1 has value: " << myMap[1] << std::endl;
    std::cout << "Key 3 has value: " << myMap.at(3) << std::endl;

    //Modifiers
    auto it = myMap.begin(); //points to 1
    it++; //points to 3
    myMap.insert(it, std::pair<int, char>{2, 'b'});
    std::cout << "After insert: ";
    printMap(myMap);

    it = myMap.begin(); //points to 1
    it++; //points to 2
    myMap.erase(it);
    std::cout << "After erase: ";
    printMap(myMap);
}