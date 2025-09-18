#include <iostream>
// Ternary operator works like an if statement '?'
// condition ? value if true : value if false
int main()
{
    int percent;
    std::string result;

    std::cout << "\nEnter your percentage: ";
    std::cin >> percent;

    percent >= 40 ? result = "Passed!" : result = "Failed!";
    std::cout << "You " << result << "\n\n";

    return 0;
}