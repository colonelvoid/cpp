#include <iostream>
// Functions are user defined pieces of code
// Allow us to reuse it more efficiently
// Void function has no return value
// Return value functions calculate a value and bring it back to main function

void happybday(std::string name);
//declared
int main()
{
    std::string name;

    std::cout << "\nWhat is your name: ";
    std::getline(std::cin >> std::ws, name);

    //sending an argument name
    happybday(name);

    return 0;
}

// defined
void happybday(std::string name)
{
    std::cout << "\nHappy birthday to you \n";
    std::cout << "Happy birthday to you \n" ;
    std::cout << "Happy birthday dear " << name << "\n";
    std::cout << "Happy birthday to you \n\n";
}