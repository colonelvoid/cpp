#include <iostream>
#include <queue>
using namespace std;

// First in first out data structure FIFO
// has the functions:
// push, emplace
// front
// pop
// size
// empty
// swap

int main()
{
    cout << '\n';
    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);
    q.pop();

    //queue<int> s2;
    //s2.swap(s) swaps elemnts between queue1 and queue2 


    cout << "Size: " << q.size() << "\n\n";
    while (!q.empty()) // prints till queue is emptied
    {
        cout << q.front() << '\n'; // prints the element at the top
        q.pop(); // deletes the top element so it changes to n - 1
    }

    cout << '\n';
    return 0;
}