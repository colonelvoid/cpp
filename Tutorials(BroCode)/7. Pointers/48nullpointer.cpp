#include <iostream>
using namespace std;

int main()
{
    // Null pointer = pointer holds a null value so that a value can be added later
    // Helpful when determining if an address was successfully assigned to a pointer
    // When derefencing, be careful that the pointer is not null, as it will cause undefined behaviour


    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        cout << "\naddress was not assigned\n";
    }
    else
    {
        cout << "\naddress was assigned\n";
        cout << *pointer << "\n\n";
    }

    return 0;
}