#include <iostream>

int searchArray(int numbers[], int size, int myNum);

int main()
{
    using namespace std;

    int numbers[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "\nEnter element to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (!(index < 0))
    {
        cout << myNum << " is at index " << index;
    }
    else
    {
        cout << myNum << " is not in the array";
    }
    cout << "\n\n";

    return 0;
}

int searchArray(int numbers[], int size, int myNum)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == myNum)
        {
            return i;
        }
    }
    return -1;
}