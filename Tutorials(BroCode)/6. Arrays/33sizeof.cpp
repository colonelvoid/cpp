#include <iostream>
// sizeof() = determines the size in bytes of a
//            variable, data type, class, objects, etc.
int main()
{
    std::string name = "Parth";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    std::string names[] = {"Parth", "Darsh", "Dhairya"};

    std::cout << "\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";

    //Printing an array
    std::cout << sizeof(names)/sizeof(names[0]) << " elements in the array\n";
    std::cout << '\n';

    return 0;
}