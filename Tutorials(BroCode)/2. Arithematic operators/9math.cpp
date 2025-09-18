#include <iostream>
#include <cmath>
// ceil means roundup
// floor means rounddown
int main()
{
    double x = -3.6;
    double y = 4;
    double z;

    // Tells you the greatest number
    z = std::max(x, y);
    std::cout << "\n" << z << " is the greatest number\n";
    
    z = std::min(x, y);
    std::cout << z << " is the smallest number\n";

    z = pow(2, 3);
    std::cout << "2 raised to 3 = " << z << "\n";
    
    z = sqrt(4);
    std::cout << "Square root of 4 = " << z << "\n"; 

    z = abs(x);
    std::cout << "The absolute value of -3 is " << z << "\n";
   
    z = round(x);
    std::cout << "z rounded is " << z << "\n";

    z = ceil(x);
    std::cout << "z rounded up is " << z << "\n";

    z = floor(x);
    std::cout << "z rounded down is " << z << "\n";
   
    return 0;
}