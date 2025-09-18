#include <iostream>
// && = and
// || = or
// ! = reverses the logical state of its operand(not)
int main()
{
    int temp;

    std::cout << "\nEnter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is ideal\n\n";
    }
    else
    {
        std::cout << "The temperature is not ideal\n\n";
    }

    return 0;
}