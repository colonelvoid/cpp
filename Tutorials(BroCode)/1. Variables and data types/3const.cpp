#include <iostream>

int main()
{
    const double pi = 3.14159;
    double radius = 4;
    double circumference;

    circumference = 2 * pi * radius;

    std::cout <<"\nThe circumference of the circle is: " << circumference << "cm\n\n";

    return 0;
}