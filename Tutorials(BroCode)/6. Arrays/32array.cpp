#include <iostream>
// array = a data structure that can hold multiple values
//         values are accesses by an index number
//         "kind of like a variable that holds multiple values"
int main()
{
    std::string cars[] = {"Rx7", "Mustang", "Innova Crysta"};
    cars[1] = "Audi R8";

    std::cout << "\n" << cars[0] << "\n"; 
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n"; 
    std::cout << "\n";

    double array[2];

    array[0] = 0;

    std::cout << "Enter a number into the array: ";
    std::cin >> array[1];
    std::cout << array[0] << "\n";
    std::cout << array[1];
    std::cout << "\n\n";

    return 0;
}