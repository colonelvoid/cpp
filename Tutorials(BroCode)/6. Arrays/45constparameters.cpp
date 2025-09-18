#include <iostream>
using namespace std;

void printInfo(const string &name, const int &age);

int main()
{
    // const parameter = parammeter that is effectively read-only
    //                   code is more secure & conveys intent
    //                  useful for references and pointers

    string name = "Parth";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const string &name, const int &age)
{
    cout << age << "\n";
    cout << name << '\n';
}