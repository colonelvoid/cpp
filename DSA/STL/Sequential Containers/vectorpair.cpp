#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n";

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8}); // inserts 
    vec.emplace_back(9, 10); // in-place objects create

    for (auto p : vec) 
    {
        cout << p.first << " " << p.second << endl;
    }
    
    cout << "\n";
    return 0;
}