#include <compare>
#include <iostream>
 
int main()
{
    double foo = -5.0;
    double bar = 0.0;
 
    auto res = foo <=> bar;
 
    if (res < 0)
        std::cout << "-5.0 is less than 0";
    else if (res > 0)
        std::cout << "-5.0 is greater than 0";
    else // (res == 0)
        std::cout << "-5.0 and 0 are equal";
}