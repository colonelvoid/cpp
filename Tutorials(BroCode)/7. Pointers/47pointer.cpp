#include <iostream>
using namespace std;

int main()
{
    // pointer = variable that stores memory address of another variable
    //           sometimes it's easier to work with an address

    // & address-of operator
    // * dereferencee operator

    string name = "Parth";
    string *pname = &name; //pointer
    // Think of it like this:
    // name stores 'Parth'
    // &name is the memory address where 'Parth' lives
    // pname now holds that memory address
    // *pname means "go to that address and get the value 'Parth'"

    int age = 16;
    int *page = &age;

    string freepizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    string *pfreepizzas = freepizzas; // No need of address-of operator as array is aldready an address

    cout << "\n";
    cout << pname << "\n";
    cout << *pname << "\n";
    cout << page << "\n";
    cout << *page << "\n";
    cout << *pfreepizzas << "\n";
    cout << *page << "\n";
    cout << "\n";

    return 0;
}