#include <iostream>
using namespace std;

// As we know switches dont work well with strings as they do with int
// enums are switches but for strings
// enums = a user defined data type that consists
//         of paired named-integer constants.
//         Great if you have a set of potential options

enum day {monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7};

int main()
{
    day today = sunday; // a data type on its own    

    cout << "\n";
    switch (today)
    {
    case 1:
        cout << "It is Monday\n";
        break;
    case 2:
        cout << "It is Tuesday\n";
        break;
    case 3:
        cout << "It is Wednesday\n";
        break;
    case 4:
        cout << "It is Thurday\n";
        break;
    case 5:
        cout << "It is Friday\n";
        break;
    case 6:
        cout << "It is Saturday\n";
        break;
    case 7:
        cout << "It is Sunday\n";
        break;
    }
    cout << "\n";
        
    return 0;
}