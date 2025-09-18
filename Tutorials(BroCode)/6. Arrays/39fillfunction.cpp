#include <iostream>
// fill() = fills a range of elements with a specified value
//          fill(begin, end, value)
int main()
{
    using namespace std;

    int food = 100;
    string foods[100];
    fill(foods, foods + 100, "pizza");

    cout << "\n";
    for (int i = 0; i < food; i++)
    {
        cout << foods[i] << '\n';
    }
    cout << "\n";

    return 0;
}