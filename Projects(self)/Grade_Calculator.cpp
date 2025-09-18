#include <iostream>
using namespace std;

void getInt(vector<int> &grades)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your grade for subject number " << i + 1 << ": ";
        int temp;
        cin >> temp; 

        if (cin.fail())
        {
            cin.clear(); // clear error flag
            cin.ignore(1000, '\n'); // discard invalid input upto 1000 characters or newline
            cout << "Invalid input: please enter a number between 0 and 100\n\n";
            i--;
        }

        else if (temp >= 0 && temp <= 100)
        {
            grades[i] = temp;
        }

        else
        {
            cout << "Invalid input: please enter a number between 0 and 100\n\n";
            i--;
        }
    }
}

void result(vector<int> &grades)
{
    double average = 0;
    for (int i = 0; i < grades.size(); i++)
    {
        average += grades[i];
    }
    average /= 5;
    
    if (average >= 90)
    {
        cout << "Congratulations! You scored an A*\n";
    }
    
    else if (average >= 80 && average < 90)
    {
        cout << "Congratulations! You scored an A\n";
    }

    else if (average >= 70 && average < 80)
    {
        cout << "Congratulations! You scored a B\n";
    }

    else if (average >= 60 && average < 70)
    {
        cout << "Congratulations! You scored an C\n";
    }

    else if (average >= 50 && average < 60)
    {
        cout << "Congratulations! You scored a D\n";
    }

    else if (average >= 40 && average < 50)
    {
        cout << "Congratulations! You scored an E\n";
    }

    else
    {
        cout << "Sorry! You failed\n";
    }
}

int main()
{
    cout << '\n';
    vector<int> grades(5);

    getInt(grades);
    result(grades);

    cout << '\n';
    return 0;
}