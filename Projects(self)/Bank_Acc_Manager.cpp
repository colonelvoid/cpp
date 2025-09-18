#include <iostream>
#include <vector>
using namespace std;

class Accounts
{
private:
    int m_accountID;
    string m_name;
    double m_balance;
    bool m_isActive;

public:
    Accounts(int accountID, string name, double balance, bool isActive)
    {
        m_accountID = accountID;
        m_name = name;
        m_balance = balance;
        m_isActive = isActive;
    }

    int get_accountID() { return m_accountID; }
    string get_name() { return m_name; }
    double get_balance() { return m_balance; }
    bool get_isActive() { return m_isActive; }

    void deposit(double amount)
    {
        m_balance += amount;
    }

    bool withdraw(double amount)
    {
        if (amount > m_balance || !m_isActive) return false;
        m_balance -= amount;
        return true;
    }

    void deactivate()
    {
        m_isActive = false;
    }
};

vector<Accounts> list;

int findAccountIndex(int ID)
{
    for (int i = 0; i < list.size(); ++i)
    {
        if (list[i].get_accountID() == ID)
        {
            return i;
        }
    }
    return -1;
}

void displayMenu()
{
    cout << "\n----Welcome! This is a banking program----\n";
    cout << "1. Create account\n";
    cout << "2. Deposit funds\n";
    cout << "3. Withdraw funds\n";
    cout << "4. Show Balance\n";
    cout << "5. Mark account inactive\n";
    cout << "6. List active accounts\n";
    cout << "7. Quit the program\n";
    cout << "\nEnter your choice (1-7): ";
}

void addAccount()
{
    int accountID;
    string name;
    double balance;
    bool isActive;

    cout << "Enter account ID: ";
    while (!(cin >> accountID))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! please try again: ";
    }
    cin.ignore(1000, '\n');

    if (findAccountIndex(accountID) != -1)
    {
        cout << "❌ Account ID already exists.\n";
        return;
    }

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter initial deposit: ";
    while (!(cin >> balance) || balance < 0)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! please try again: ";
    }
    cin.ignore(1000, '\n');

    isActive = true;
    list.emplace_back(Accounts(accountID, name, balance, isActive));
    cout << "✅ Account successfully activated\n";
}

void depositMoney()
{
    int ID;
    cout << "Enter account ID to deposit: ";
    cin >> ID;

    int index = findAccountIndex(ID);
    if (index == -1)
    {
        cout << "❌ Account not found.\n";
        return;
    }

    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (cin.fail() || amount <= 0)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid amount.\n";
        return;
    }

    list[index].deposit(amount);
    cout << "✅ Deposit successful.\n";
}

void withdrawMoney()
{
    int ID;
    cout << "Enter account ID to withdraw from: ";
    cin >> ID;

    int index = findAccountIndex(ID);
    if (index == -1)
    {
        cout << "❌ Account not found.\n";
        return;
    }

    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (cin.fail() || amount <= 0)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid amount.\n";
        return;
    }

    if (list[index].withdraw(amount))
    {
        cout << "✅ Withdrawal successful.\n";
    }
    else
    {
        cout << "❌ Withdrawal failed. Check balance or account status.\n";
    }
}

void showBalance()
{
    int ID;
    cout << "Enter account ID to view balance: ";
    cin >> ID;

    int index = findAccountIndex(ID);
    if (index == -1)
    {
        cout << "❌ Account not found.\n";
        return;
    }

    cout << "Account Holder: " << list[index].get_name() << "\n";
    cout << "Balance: ₹" << list[index].get_balance() << "\n";
}

void inActive()
{
    int ID;
    cout << "Enter account ID to deactivate: ";
    cin >> ID;

    int index = findAccountIndex(ID);
    if (index == -1)
    {
        cout << "❌ Account not found.\n";
        return;
    }

    if (!list[index].get_isActive())
    {
        cout << "⚠️ Account is already inactive.\n";
        return;
    }

    list[index].deactivate();
    cout << "✅ Account marked as inactive.\n";
}

void listActiveAccounts()
{
    cout << "\n--- Active Accounts ---\n";
    for (int i = 0; i < list.size(); ++i)
    {
        if (list[i].get_isActive())
        {
            cout << "ID: " << list[i].get_accountID()
                 << ", Name: " << list[i].get_name()
                 << ", Balance: ₹" << list[i].get_balance() << "\n";
        }
    }
}

int main()
{
    int choice;
    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addAccount();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            showBalance();
            break;
        case 5:
            inActive();
            break;
        case 6:
            listActiveAccounts();
            break;
        case 7:
            cout << "👋 Exiting program. Goodbye!\n";
            break;
        default:
            cout << "❌ Invalid choice. Please select between 1 and 7.\n";
        }

    } while (choice != 7);

    return 0;
}