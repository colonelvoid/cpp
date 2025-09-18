#include <iostream>
using namespace std;

class stove
{
    private:
        int temperature = 0;

    public:
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int t)
    {
        if(t < 0)
        {
            temperature = 0;
        }
        else if(t >= 10)
        {
            temperature = 10;
        }
        else
        {
            temperature = t;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    stove stove1;

    stove1.setTemperature(10000000);
    cout << "\nThe temperature setting is: " << stove1.getTemperature() << "\n\n";

    return 0;
}