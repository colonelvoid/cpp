#include <iostream>
// To store multiple values in one variable and use them individually
namespace first
{
    int x = 1;
}

namespace second 
{
    int x = 2;
}

int main()
{
    int x = 0;

    std::cout << "\n" << x << "\n" << first::x << "\n" << second::x << "\n\n";

    return 0;
}
