#include <iostream>
using namespace std;

// function template = describes what a function looks like
//                     Can be used to generate as many overloaded functions
//                     as needed, each using different data types

template <typename T, typename U>
T max(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "\n";
    cout << max(1, 2.1) << "\n";
    cout << "\n";

    return 0;
}