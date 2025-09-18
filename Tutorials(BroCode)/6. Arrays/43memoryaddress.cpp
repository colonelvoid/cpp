#include <iostream>
using namespace std;

int main()
{
    // memory adress = a location in the conmputer's memory where the data is stored
    // memory adress can be accessed with & (adress-of operator)

    string name = "Parth";
    int age = 16;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}