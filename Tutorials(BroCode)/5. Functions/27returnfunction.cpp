#include <iostream>
// return = return a value back to the spot
// where you called the encompassing function

double square(double length);
double cube (double length);

int main()
{
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "\nArea: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n\n"; 

    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}