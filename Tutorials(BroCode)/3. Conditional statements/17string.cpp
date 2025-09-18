#include <iostream>

int main()
{
    std::string name;
    std::cout << "\n**********This is a email adrress maker**********\n\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    if (name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters please re-enter\n\n";
    }
    else if (name.empty())
    {
        std::cout << "You didn't enter your name please enter it\n\n";
    }
    else
    {
        name.append("@gmail.com");
        name.insert(0, "1"); // adds 1 before your name
        //name.find(' '); finds and tells where the entered string is
        //name.erase(0, 3); erases the 3rd character in the from 'name'
        std::cout << "Welcome " << name << "!\n\n";
    }

    return 0;
}