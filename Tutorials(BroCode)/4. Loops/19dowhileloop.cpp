#include <iostream>
// do while loop = do some block of cod first like user input
//                 then repeat again if the condition is not met
int main()
{
    int number;

    do
    {
        std::cout <<"\nEnter a number: ";
        std::cin >> number;
    }
    while (number <= 0);
    
    std::cout << "The # is " << number << "\n\n";

    return 0;
}