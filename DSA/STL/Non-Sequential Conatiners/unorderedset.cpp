#include <iostream>
#include <unordered_set>
using namespace std;

// this is also like set
// it ignores duplicate values
// does not sort unlike set
// prints in random order

int main()
{
    cout << '\n';
    unordered_set<int> s;

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