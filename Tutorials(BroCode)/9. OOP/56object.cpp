#include <iostream>
using namespace std;

// object = a collection of attributes and methods
//          They can have characteristics and can perform actions 
//          Can be used to mimic real world items (eg: phone, book, dog)
//          Created from a class which acts as a "blue-print"

// classes vs structs
// the only difference is that classes are private by default while structs are public

class car // This is a class
{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate() // This is a method(a term used in place of a function inside a class)
        {
            cout << "You step on the gas\n";
        }
        void brake()
        {
            cout << "You stepped on the brakes\n";
        }
};

int main()
{
    car car1; // This is an object

    car1.make = "Ford"; // This is an attribute
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    cout << "\n";
    cout << car1.make << "\n";
    cout << car1.model << "\n";
    cout << car1.year << "\n";
    cout << car1.color << "\n";

    car1.accelerate();

    car car2; // This is an object
    car2.make = "Chevorlette"; // This is an attribute
    car2.model = "Corvette";
    car2.year = 2023;
    car2.color = "yellow";

    cout << "\n";
    cout << car2.make << "\n";
    cout << car2.model << "\n";
    cout << car2.year << "\n";
    cout << car2.color << "\n";

    car2.brake();

    cout << "\n";
    return 0;
}