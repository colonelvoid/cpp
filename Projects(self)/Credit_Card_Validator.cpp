#include <iostream>
#include <vector>
using namespace std;

class Card
{
private:
    vector<int> m_cardNumber;
    string m_name;
    string m_cardType;
    int m_month;
    int m_year;

public:
    vector<int> get_Card_Number() { return m_cardNumber; }
    string get_name() { return m_name; }
    string get_cardType() { return m_cardType; }
    int get_month() { return m_month; }
    int get_year() { return m_year; }

    Card(vector<int> cardNumber, string name, string cardType, int month, int year)
    {
        m_cardNumber = cardNumber;
        m_name = name;
        m_cardType = cardType;
        m_month = month;
        m_year = year;
    }
};

vector<Card> cardList;

void showMenu()
{
    cout << "\n===== Card Management Menu =====\n";
    cout << "1. Add a new card\n";
    cout << "2. View all cards\n";
    cout << "3. Validate a card\n";
    cout << "4. Exit the program\n";
    cout << "Enter your choice: ";
}

void addCard()
{
    vector<int> cardNumber(16);
    string name;
    string cardType;
    int month;
    int year;

    cout << "Enter 16-digit card number (one digit at a time):\n";
    for (int i = 0; i < cardNumber.size(); i++)
    {
        do
        {
            cin >> cardNumber[i];
            if (cin.fail() || cardNumber[i] < 0 || cardNumber[i] > 9)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input! please try again: ";
            }
            else break;
        } while (true);
    }
    cin.ignore(1000, '\n');

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter card provider name: ";
    getline(cin, cardType);

    do
    {
        cout << "Enter the expiry month (1-12): ";
        cin >> month;
    } while (month < 1 || month > 12);

    cout << "Enter the expiry year (e.g., 2026): ";
    cin >> year;

    cardList.emplace_back(cardNumber, name, cardType, month, year);
    cout << "✅ Card added successfully!\n";
}

void viewCards()
{
    if (cardList.empty())
    {
        cout << "📭 No cards have been added yet.\n";
        return;
    }

    for (int i = 0; i < cardList.size(); ++i)
    {
        cout << "\nCard Index: " << i << "\n";
        cout << "Name: " << cardList[i].get_name() << "\n";
        cout << "Card Type: " << cardList[i].get_cardType() << "\n";
        cout << "Card Number: ";
        for (int digit : cardList[i].get_Card_Number())
        {
            cout << digit;
        }
        cout << "\nExpiry Date: " << cardList[i].get_month() << "/" << cardList[i].get_year() << "\n";
    }
}

void validateCard()
{
    if (cardList.empty())
    {
        cout << "📭 No cards to validate.\n";
        return;
    }

    int index;
    cout << "Enter card index to validate (0 to " << cardList.size() - 1 << "): ";
    cin >> index;

    if (index < 0 || index >= cardList.size())
    {
        cout << "❌ Invalid index.\n";
        return;
    }

    vector<int> number = cardList[index].get_Card_Number();
    int sum = 0;
    bool doubleDigit = false;

    for (int i = number.size() - 1; i >= 0; --i)
    {
        int digit = number[i];
        if (doubleDigit)
        {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }

    if (sum % 10 == 0)
        cout << "✅ Card is VALID according to Luhn algorithm.\n";
    else
        cout << "❌ Card is INVALID.\n";
}

int main()
{
    cout << "\n";
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addCard();
            break;

        case 2:
            viewCards();
            break;

        case 3:
            validateCard();
            break;

        case 4:
            cout << "✅ Program successfully quit\n";
            break;

        default:
            cout << "Invalid choice! please enter a number between 1 - 4: \n";
            break;
        }
    } while (choice != 4);

    cout << "\n";
    return 0;
}