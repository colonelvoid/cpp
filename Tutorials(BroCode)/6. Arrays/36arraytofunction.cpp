#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    using namespace std;

    double prices[] = {49.99, 15.05, 75.00, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "\n";
    cout << "$" << total;
    cout << "\n\n";
    
    return 0;
}

double getTotal(double prices[], int size)
{
    double sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += prices[i];
    }

    return sum;
}