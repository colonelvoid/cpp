#include <iostream>
using namespace std;

int main()
{
    // dynamic memory = memory that is allocated after the program
    //                  id aldready compiled and running. Use the 
    //                  'new' operator to allocate memory in the heap
    //                  rather than the stack

    //                  Useful when we don't know how much memory we
    //                  will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int size;

    cout << "\nHow many grades to enter in?: ";
    cin >> size;

    char* Grades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> Grades[i];
    }
    
    cout << "Grades: ";
    for (int i = 0; i < size; i++)
    {
        cout << Grades[i] << " ";
    }
    cout << "\n\n";

    delete[] Grades;

    return 0;
}