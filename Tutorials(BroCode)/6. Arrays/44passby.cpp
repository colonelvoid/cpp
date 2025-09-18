#include <iostream>
using namespace std;
// writing x, y just sends the copies not the original
// writing &x, &y sends the memory address reference;

// This is passing by reference 
// The former is passing by value

void swap(string &x, string &y);

int main()
{
    string x = "Coconut Water";
    string y = "Water";

    swap(x, y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}
void swap(string &x, string &y)
{
    string temp;
    
    temp = x;
    x = y;
    y = temp;
}