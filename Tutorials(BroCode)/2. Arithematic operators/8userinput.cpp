#include <iostream>
// cout <<(insertion operator)
// cin >>(extraction operator)
// cin does not allow spaces as it gets input buffer
// getline(cin, variable) can be used for string with spaces
// similarly using cin before getline also causes input buffer
// Which can be removed by adding >> std::ws after getline(cin 
int main()
{
    std::string name;
    int age;

    std::cout << "\nWhat is your age? ";
    std::cin >> age;
    std::cout << "You are " << age << " years old\n\n";

    std::cout << "\nWhat is your full name? ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << "\n";

    return 0;
}