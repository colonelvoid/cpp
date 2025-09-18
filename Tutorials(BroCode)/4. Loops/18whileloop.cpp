#include <iostream>

int main()
 {
    std::string name;

    while (name.empty())
    {
        std::cout << "\nEnter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << "!\n\n";
    return 0;
}