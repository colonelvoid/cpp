#include <iostream>
// type conversion = converts value of one data type into another
//          implicit = automatic
//          explicit = Precede value with dtaa type (int)
int main()
{
    int marks = 110;
    int total = 150;
    double percentage = marks/(double)total * 100;

    std::cout << "\n" << percentage << "\n\n";

    return 0;
}