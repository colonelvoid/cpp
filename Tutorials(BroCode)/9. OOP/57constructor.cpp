#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        double gpa;

        student(string x, int y, double z)
        {
            name = x;
            age = y;
            gpa = z;
        }
};

int main()
{
    student students[] = 
    {
        student("Spongebob", 25, 3.2),
        student("Patrick", 27, 1.5),
        student("Sandy", 24, 4.0)
    };

    for (int i = 0; i < 3; ++i)
    {
        cout << "\n";
        cout << students[i].name << "\n";
        cout << students[i].age << "\n";
        cout << students[i].gpa << "\n";
        cout << "\n";
    }

    return 0;
}
