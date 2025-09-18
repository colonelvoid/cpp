#include<iostream>
#include <deque>
using namespace std;

// deque = double ended queue
// deque is like a combination of list and vector
// It also has the functions:
// push_back, push_front
// emplace_back, emplace_front
// pop_back, pop_front
// and all the previously studied functions

// Vector and deque are implemented as dynamic arrays (Has Random access)
// List is implemented as a doubly linked list (Does not have Random access)

// Random access:
// you can type cout << l[1]; to print the element with index of 1 in dynamic arrays
// however it i not possible in the case of lists

// These 3 are classified as sequence containers, which access data sequentially

int main()
{
    cout << "\n";
    deque<int> d = {1, 2 ,3, 4, 5};

    for (int x : d) 
    {
        cout << x << "\n";
    }
    
    cout << "\n";
    return 0;
}