#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n";

    vector<int> vec(3, 0); // initializes 0, 3 times when declaring
    vec.push_back(1); // inserts 1 into the vector
    vec.push_back(2);
    vec.emplace_back(3); // similar to push_back
    vec.emplace_back(4);
    vec.emplace_back(5);
    vec.pop_back(); // deletes the last element in the vector
    // both push back and emplace back are similar

    vec.erase(vec.begin(), vec.begin() + 3); // erases the elements from index 0 to index 2

    // v.clear(); will clear the vector
    // vec.erase only changes the size not the capacity 

    vec.insert(vec.begin() + 2, 69); // Enters an element at a given index number

    cout << "Size: " << vec.size() << "\n";
    cout << "Capacity: " << vec.capacity() << "\n\n";
    for (int x : vec) 
    {
        cout << x << ' ';
    }
    cout <<"\n\n";

    return 0;
}