#include <iostream>

int main()
{   
    using namespace std;

    // foreach loop = loop that eases the traversal over an
    //                iterable data set
    cout << '\n';
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(string i : students)
    {
        cout << i << "\n";
    }
    cout << '\n';

    return 0;
}