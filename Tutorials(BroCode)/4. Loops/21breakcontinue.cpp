#include <iostream>
// breaks stops the loop at the given condition
// continue skips the condition's result and continues the loop
int main()
{
    std::cout << "\n";

    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        std::cout << i << "\n";
    }

    std::cout << "\n";

    return 0;
}