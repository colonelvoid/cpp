#include <iostream>
using namespace std;

int main()
{
    cout << '\n';
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        cout << students[i] << "\n";
    }
    cout << '\n';

    return 0;
}