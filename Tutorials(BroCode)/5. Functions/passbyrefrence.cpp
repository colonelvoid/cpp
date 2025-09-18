#include <iostream>
using namespace std;
// This is pass by reference

// Here n is just the placeholder for num
// the parameter need not be the same as the argument 'n' != 'num'
// when you pass by reference the function receives the actual variable not a copy
// when the contents of the variable are updated in the defined function
// they are also updated in the main function
// their addresses are the same 
void printNum(int &num)
{
    cout << "Number = " << num << "\n";
    cout << &num << "\n"; // both have the same address meaning they are the same variables and there are no copies

}

int main()
{
    int num;

    cout << "\nEnter a number of your choice: ";
    cin >> num;
    cout << &num << "\n\n";

    printNum(num);

    return 0;
}