#include <iostream>
#include <stack>
using namespace std;

// Last in first out data structure LIFO
// Has the functions:
// push, emplace
// top
// pop
// size
// empty
// swap
// Think of a stack like a cylindrical container where you can put objects and remove the last put first 

int main()
{
    cout << "\n";
    stack<int> s;

    s.push(1);
    s.push(2);
    s.emplace(3);
    s.emplace(4);
    s.pop();

    //stack<int> s2;
    //s2.swap(s) swaps elemnts betwee stack1 and stack2 

    cout << "Size: " << s.size() << "\n\n";
    while (!s.empty()) // prints till stack is emptied
    {
        cout << s.top() << '\n'; // prints the element at the top
        s.pop(); // deletes the top element so it changes to n - 1
    }

    cout << "\n";
    return 0;
}