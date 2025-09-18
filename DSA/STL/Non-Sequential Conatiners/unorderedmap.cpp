#include <iostream>
#include <unordered_map>
using namespace std;

// similar to map, but it does not sort by default

int main()
{
    cout << "\n";
    unordered_map<string, int> um;

    um.emplace("tv", 100);
    um.emplace("camera", 70);
    um.emplace("tablet", 50);
    um.emplace("laptop", 25);
    um.emplace("tv", 100);

    for (const auto& entry : um) 
    {
        cout << entry.first << " : " << entry.second << '\n';
    }

    cout << "\n";
    return 0;
}