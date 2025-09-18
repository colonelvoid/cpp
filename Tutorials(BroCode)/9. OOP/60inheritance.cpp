#include <iostream>
using namespace std;

// inheritance = A class that receives attributes and methods from another class
//               Inheriting class is called a children class
//               Sender class is called a parent class
//               Helps to reuse similar code found within multiple classes

class Shape
{
    public:
        double surfacearea;
        double volume;
}; 

class Cube : public Shape // Inherited class
{
    public: 
        double side;
    Cube(double side)
    {
        this -> side = side;
        this -> surfacearea = side * side * 6;
        this -> volume = side * side * side;
     }
};

class Sphere : public Shape // Inherited class
{
    public:
        double radius;
    Sphere(double radius)
    {
        this -> radius = radius;
        this -> surfacearea = 4 * 3.14159 * radius * radius;
        this -> volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
    }
};

int main()
{
    Cube cube(10); // object passing an argument
    cout << "\nSurface Area = " << cube.surfacearea << "\n";
    cout << "Volume = " << cube.volume << "\n";

    Sphere Sphere(5); // object passing an argument
    cout << "\nSurface Area = " << Sphere.surfacearea << "\n";
    cout << "Volume = " << Sphere.volume << "\n\n";

    return 0;
}