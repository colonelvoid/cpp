#include <iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car car); // Car is like the data tyoe here, and car is the parameter

int main()
{
    Car car1;
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    Car car2;
    car2.model = "Corvette";
    car2.year = 2023;
    car2.color = "red";

    printCar(car1); // car1 is the argument

    return 0;
}

void printCar(Car car)
{
    cout << "\n";
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
    cout << "\n";
}