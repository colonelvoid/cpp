#include <iostream>

void printnum(int mynum);
// A function will use local variables first then the variables from other functions like main
int main()
{
    int mynum = 1;

    std::cout << "\n";
    printnum(mynum);
    std::cout << "\n\n";

    return 0;
}

void printnum(int mynum)
{
    std::cout << mynum;
}