#include <iostream>
// Arithematic operators (+ - * /)
int main()
{
    int students = 20;
    // Below is the same as student = student + 1;
    // students++ can also be used as were only adding 1

    // Addition
    students += 1;
    std::cout << "\n" << students << "\n";

    // Subtraction
    students --;
    std::cout << students << "\n";

    // Multiplication
    students *= 2;
    std::cout << students << "\n";

    // Division
    students /= 2;
    std::cout << students << "\n";

    // remainder rewuires the modulus operator '%'
    students %= 3;
    std::cout << students << "\n\n";

    return 0;
}
// Order of operations:(from left to right)
// Parentheses
// Multiplication and division 
// Addition and subtraction