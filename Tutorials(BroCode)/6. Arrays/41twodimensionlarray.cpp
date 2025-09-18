#include <iostream>
using namespace std;
//It has rows and columns like a table
//You can initialize the number of rows later but columns have to be immediately initialized
//[1][2] 1 is the no .of rows, 2 is the no. of columns

int main()
{
    string cars[][3] = {{"Mustang", "Ecosport", "Endeavor"},
                       {"Swift", "Brezza", "Grand Vitara"},
                       {"Challenger", "Hemiscat", "Durango"}};

    cout << "\n";
    cout << cars[0][0] << " ";
    cout << cars[0][1] << " ";
    cout << cars[0][2] << "\n";
    cout << cars[1][0] << " ";
    cout << cars[1][1] << " ";
    cout << cars[1][2] << "\n";
    cout << cars[2][0] << " ";
    cout << cars[2][1] << " ";
    cout << cars[2][2] << "\n";
    cout << "\n";

    return 0;
}