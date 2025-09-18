#include <iostream>
#include <map>
using namespace std;

// think of map like a table that stores values and corresponding keys(unique to each value) 
// has functions like:
// insert, emplace
// count
// erase
// find
// size, empty, erase
// prints in alphabetical order of the key

int main()
{
    cout << '\n';
    map<string, int> m;
    
    m["TV"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m.insert({"camera", 25});
    m.emplace("tablet", 75);

    m.erase("TV");

    for (auto& entry : m) 
    {
        cout << entry.first << " : " << entry.second << '\n';
    }

    cout << "\n";
    cout << "No. of keys: " << m.count("laptop") << "\n";

    if (m.find("camera") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }
    
    cout << '\n';
    return 0;
}