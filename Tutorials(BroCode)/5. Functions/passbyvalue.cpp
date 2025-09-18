#include <iostream>
using namespace std;
// This is pass by value 

// Here n is just the placeholder for num
// the parameter need not be the same as the argument 'n' != 'num'
// but when passing by value function only receives a COPY of num
// when num is updated in function it still remains the same in main
// to update the num value we can us epass by reference
// pass by reference makes use of '&' pointers
void printNum(int n) // int num is called the parameter
{
    cout << "\n\nNumber = " << n << "\n";
    cout << &n << "\n\n"; // Both have different addresses implying they are not the same variables
}

int main()
{
    int num;

    cout << "\nEnter a number of your choice: ";
    cin >> num;
    cout << &num;

    printNum(num);// num is called the argument

    return 0;
}