#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    string name;
    bool status;

    Task(string n, bool s) : name(n), status(s) {}
};

vector<Task> list;

void displayMenu()
{
    cout << "\n🧠 TO-DO LIST MENU:\n";
    cout << "1. Add task\n";
    cout << "2. View tasks\n";
    cout << "3. Mark task as done\n";
    cout << "4. Delete a task\n";
    cout << "5. Quit\n";
    cout << "Please enter your choice: ";
}

void addTask()
{
    string name;
    cout << "Enter the task's name: ";
    cin.ignore();
    getline(cin, name);
    
    list.emplace_back(name, false);
    cout << "✅ Task added successfully!\n";
}

void viewTask()
{
    if (list.empty())
    {
        cout << "No tasks available.\n";
        return;
    }

    bool hasIncomplete = false;
    for (int i = 0; i < list.size(); i++)
    {
        if (!list[i].status)
        {
            cout << i + 1 << ". " << list[i].name << "\n";
            hasIncomplete = true;
        }
    }

    if (!hasIncomplete)
    {
        cout << "All tasks are completed\n";
    }
}

void markAsDone()
{
    if (list.empty())
    {
        cout << "No tasks available.\n";
        return;
    }

    int index;
    cout << "Enter the task index number of the task: ";
    cin >> index;

    index -= 1; // Convert to zero-based index

    if (index < 0 || index >= list.size())
    {
        cout << "❌ Invalid task index.\n";
        return;
    }

    if (list[index].status == false)
    {
        list[index].status = true;
        cout << "✅ Task successfully marked as done!\n";
    }
    else
    {
        cout << "⚠️ Task is already completed.\n";
    }
}

void deleteTask()
{
    if (list.empty())
    {
        cout << "No tasks available.\n";
        return;
    }

    int index;
    cout << "Enter the task index number of the task: ";
    cin >> index;

    index -= 1; // Convert to zero-based index

    if (index < 0 || index >= list.size())
    {
        cout << "❌ Invalid task index.\n";
        return;
    }

    string taskName = list[index].name;
    list.erase(list.begin() + index);

    cout << "🗑️ Task \"" << taskName << "\" has been deleted successfully.\n";
}

int main()
{
    cout << "\n";
    int choice;

    do
    {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Flush newline before any getline() calls

        switch (choice)
        {
        case 1:
            addTask();
            break;

        case 2:
            viewTask();
            break;

        case 3:
            markAsDone();
            break;

        case 4:
            deleteTask();
            break;

        case 5:
            cout << "Quitting the program! ";
            break;
        
        default:
            cout << "\nInvalid input! Please enter a number between 1 - 5\n";
            break;
        }
    } while (choice != 5);
    

    cout << "\n";
    return 0;
}