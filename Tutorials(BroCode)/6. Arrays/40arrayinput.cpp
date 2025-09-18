#include <iostream>
using namespace std;

int main()
{
    string food;
    string foods[5];
    string temp;
    int i;
    int size = sizeof(foods)/sizeof(foods[0]);

    cout << "\n";
    for (i = 0; i < size; i++)
    {
        cout << "Enter a food you like or press 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        if (temp == "q")
        {
            break;//breaks the loop if user enter q
        }
        else
        {
            foods[i] = temp;
        }   
    }
    cout << "\nYou like the following food:\n";

    for (int j = 0; !foods[j].empty(); j++)
    {
        cout << foods[j] << '\n';
    }
    cout << "\n";

    return 0;
}