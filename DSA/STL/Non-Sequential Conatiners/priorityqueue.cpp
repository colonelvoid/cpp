#include <iostream>
#include <queue>
using namespace std;

// it is a binary tree data structure
// by defualt gives the priority to the greatest value
// pops the largest element
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
    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<int>> pq; for the reverse priority queue

    pq.push(1);
    pq.push(5);
    pq.emplace(10);
    pq.emplace(3);
    pq.emplace(7);

    while (!pq.empty())
    {
        cout << pq.top() << "\n";
        pq.pop();
    }
    
    cout << '\n';
    return 0;
}