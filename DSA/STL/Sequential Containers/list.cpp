#include <iostream>
#include <list>
using namespace std;

// A list has the following functions:
// push_back, push_front
// emplace_back, emplace_front
// pop_back, pop_front
// and all the previously studied functions

// Vector is implemened as a dynamic array 
// List is implemented as a doubly linked list

int main()
{
    cout << "\n";
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);

    for (int x : l) 
    {
        cout << x << '\n';
    }

    cout << "\n";
    return 0;
}