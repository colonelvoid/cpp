#include <iostream>
using namespace std;

long long factorial(int number) 
{
    if (number > 1) // recursive case
    {
        long long smaller = factorial(number - 1);
        long long result = number * smaller;
        cout << number << " * " << smaller << " = " << result << endl;
        return result;
    } 
    else // base case
    {
        return 1;
    }
}


int main() 
{
    int number;
    do 
    {
        cout << "\nEnter a number less than or equal to 20: ";
        cin >> number;
    } 
    while (number > 20 || number < 0);

    cout << factorial(number);
    cout << "\n";
    return 0;
}
