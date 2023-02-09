#include <iostream>
#include <vector>
/**
 * Lambda expressions allow us to write inline functions that can be used for short snippets of code that are not going to
 * be reused and therefor are not worth naming.
 *
 */

void printVector(std::vector<int> v){
    std::for_each(v.begin(), v.end(), [](int i){
        std::cout << i << " ";
    }) ;
    std::cout << std::endl;
}

int main() {
    std::vector<int> myVector = {4, 1, 3, 5, 2, 3, 1, 7};
    printVector(myVector);

    //Find first element in vector greater than 4
    auto it = std::find_if(myVector.begin(), myVector.end(), [](int i){
        return i > 4;
    });
    std::cout << "First number greater than 4 is: " << *it << std::endl;

    //Sort vector
    std::sort(myVector.begin(), myVector.end(), [](const int &a, const int &b){
        return a > b;
    });
    std::cout << "After sort: ";
    printVector(myVector);

    //Count elements greater than or equal to 5
    int count = std::count_if(myVector.begin(), myVector.end(), [](int a){
        return (a >= 5);
    });
    std::cout << "The number of elements greater than or equal to 5 is: " << count << std::endl;

    //Remove duplicates
    it = std::unique(myVector.begin(), myVector.end(), [](int a, int b){
        return a == b;
    });
    myVector.resize(std::distance(myVector.begin(), it));
    std::cout << "After removing duplicates: ";
    printVector(myVector);

    //Find square of number
    auto square = [](int i){
        return i*i;
    };
    std::cout << "Square of 5 is: " << square(5) << std::endl;
}
