#include <iostream>
#include <map>
using namespace std;

// multimap is similar to map, it's just that you can assign multiple keys to one value

int main()
{   
    cout << "\n";
    multimap<string, int> mm;

    // Here tv is the key
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);
    mm.emplace("cd", 100);
    mm.emplace("camera", 100);
    mm.emplace("phone", 100);

    for (auto it : mm) 
    {
        cout << it.first << " : " << it.second << '\n';
    }

    cout << "\n";
    return 0;
}