#include <iostream>
#include <set>
using namespace std;

// set store multiple values
// duplicate values are not ignored unlike set

int main()
{
    cout << '\n';
    multiset<int> s;

    s.emplace(1);
    s.emplace(9);
    s.emplace(3);
    s.emplace(6);
    s.emplace(5);

    s.emplace(1);
    s.emplace(9);
    s.emplace(3);
    s.emplace(6);
    s.emplace(5);

    for (int x : s) 
    {
        cout << x << "\n";
    }

    cout << '\n';
    return 0;
}