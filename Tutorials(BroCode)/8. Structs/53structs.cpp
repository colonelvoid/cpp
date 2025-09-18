#include <iostream>
using namespace std;

// struct = a structure that groups related variables under one name
//          structs can contain many different data types
//          variables in a struct are known as "members"
//          members can be accessed with. "Class Member Access Operator"

// a struct is kind of like a data type on its own
struct student
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student student1; // imagine 'student' as the data type and 'student1' as the variable
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;
    
    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 3.8;
    student3.enrolled = true;

    cout << "\n";
    cout << student1.name << "\n";
    cout << student1.gpa << "\n";
    cout << student1.enrolled << "\n";
    cout << "\n";

    cout << student2.name << "\n";
    cout << student2.gpa << "\n";
    cout << student2.enrolled << "\n";
    cout << "\n";

    cout << student3.name << "\n";
    cout << student3.gpa << "\n";
    cout << student3.enrolled << "\n";
    cout << "\n";

    return 0;
}