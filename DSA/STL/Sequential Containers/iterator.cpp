#include <iostream>
#include <vector>
using namespace std;

// Iterators:
// .begin() = points to index no. 0
// .end() = points to the empty element after the last index
// Think of them working like pointers, but they are not exactly pointers
// We can dereference them like pointers
// We use these to iterate over vectors and other STL containers

int main()
{
    cout << "\n";

    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "vec.begin = " << *(vec.begin()) << '\n';
    cout << "vec.end = " << *(vec.end()) << "\n\n";

    vector<int>::iterator i;
    for (i = vec.begin(); i != vec.end(); i++) 
    {
        cout << *i << "\n";
    }
    // using iterators instead of manual indexing like i = 0
    // is better as you can use itertors with other all container types
    // but indexing only works with certain containers like vectors and arrays
    // iterators acces direct memory location unlike index
    
    cout << "\n";
    return 0;
}