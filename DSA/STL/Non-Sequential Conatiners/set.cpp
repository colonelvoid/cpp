#include <iostream>
#include <set>
using namespace std;

// set is also similar to map think of this like a mathematical set
// set stores unique values
// this also sorts the set
// duplicate values ar ignored
// also uses self balancing tree
// uses the same general functions as map
// it has 2 more: lower_bound() and upper_bound()
// for lower_bound(3) - it returns a value of atleast 3 or = 3 as an iterator needs *

int main()
{
    cout << '\n';
    set<int> s;

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