#include <iostream>

int main()
{
    std::cout << "\n";
    // This means the entire inner loop will turn 3 times
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            std::cout << j << "\n";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    return 0;
}