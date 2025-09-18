#include <iostream>
using namespace std;

// STL consists of:
// Algortihms - Operate on containers (searching, sorting etc.)
// Containers - Store data
// Functions - Custom logic passed to algorithms
// Iterators - Access elements in containers

int main()
{   
    // Before learning about containers we will learn about pairs
    cout << "\n";
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    cout << "\n\n";

    // We can also use nested pairs

    pair<int , pair<int, int>> a = {1, {3, 4}};
    cout << a.first << " " << a.second.first << " " << a.second.second;
    cout << "\n\n";

    // We can also make an array of pairs

    pair<int, int> arr[] = {{1, 3}, {2, 5}, {5, 1}};
    for (auto p : arr) 
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "\n\n";

    return 0;
}