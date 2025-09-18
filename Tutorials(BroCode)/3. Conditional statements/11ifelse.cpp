#include <iostream>
// if statements = do something if the condition is true
//                 if not, then do something else
int main()
{
    int age;

    std::cout << "\nEnter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are and adult\n\n";
    }
    else if (age >= 65)
    {
        std::cout << "You are a senior citizen\n\n";
    }
    else if (age <= 4 && age > 0)
    {
        std::cout << "You are a toddler\n\n";
    }
    else if (age <= 0)
    {
        std::cout << "Invalid input please anter a number greater than 0\n\n";
    }
    else
    {
        std::cout << "You are a minor\n\n";
    }

    return 0;
}