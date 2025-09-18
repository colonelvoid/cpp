#include <iostream>
// Instead of using too many else ifs, we can use switch
// Works with integers
int main()
{
    int month;

    do
    {
        std::cout << "\nEnter the month (1-12): ";
        std::cin >> month;
    } 
    while (month > 12 || month <= 0);
    

    switch (month)
    {
    case 1:
        std::cout << "It is January\n\n";
        break;

    case 2:
        std::cout << "It is February\n\n";
        break;

    case 3:
        std::cout << "It is March\n\n";
        break;

    case 4:
        std::cout << "It is April\n\n";
        break;

    case 5:
        std::cout << "It is May\n\n";
        break;

    case 6:
        std::cout << "It is June\n\n";
        break;

    case 7:
        std::cout << "It is July\n\n";
        break;

    case 8:
        std::cout << "It is August\n\n";
        break;

    case 9:
        std::cout << "It is September\n\n";
        break;

    case 10:
        std::cout << "It is October\n\n";
        break;

    case 11:
        std::cout << "It is November\n\n";
        break;

    case 12:
        std::cout << "It is December\n\n";
        break;
    }

    return 0;
}