#include <iostream>
#include <type_traits>

class A {};

template <class T>
T square(T i)
{
    static_assert(std::is_integral<T>::value, "Integer required.");
    return i*i;
}

int main()
{
    A a;
    square(a);
    std::cout << square(123) << '\n';
}
