#include <iostream>

/**
 * Templates are special functions that can operate with generic data types. This allows us to create a function whose
 * functionality can be adapted to more than one data type or class without repeating the entire code for each one. This
 * is done by using template parameters, which are special kinds of parameters that can be used to pass a data type as
 * an argument - just like regular function parameters can be used to pass values to a function, template parameters can
 * be used to pass data types to a function.
 */

template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << myMax<int>(3, 7) << std::endl;
    std::cout << myMax<double>(3.0, 7.0) << std:: endl;
    std::cout << myMax<char>('g', 'e') << std::endl;
}