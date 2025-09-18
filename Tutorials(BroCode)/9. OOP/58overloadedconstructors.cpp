#include <iostream>
using namespace std;

class pizza
{
    public:
        string topping1;
        string topping2;
        string topping3;

    pizza(string t1)
    {
        topping1 = t1;
    }
    pizza(string t1, string t2)
    {
        topping1 = t1;
        topping2 = t2;
    }
    pizza(string t1, string t2, string t3)
    {
        topping1 = t1;
        topping2 = t2;
        topping3 = t3;
    }
};

int main()
{
    pizza pizza1("pepperoni");
    cout << "\n";
    cout << pizza1.topping1 << "\n";
    cout << "\n";

    pizza pizza2("mushroom", "pepper");
    cout << pizza2.topping1 << "\n";
    cout << pizza2.topping2 << "\n";
    cout << "\n";

    pizza pizza3("mushroom", "pepper", "pepperoni");
    cout << pizza2.topping1 << "\n";
    cout << pizza2.topping2 << "\n";
    cout << pizza3.topping3 << "\n";
    cout << "\n";

    return 0;
}