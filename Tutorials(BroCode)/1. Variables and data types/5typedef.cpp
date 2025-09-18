#include <iostream>
#include <vector>
// typedef gives aliases to frequently written data types to simplify it
// _t is the convention to be added after naming typedef for eg: hi_t
//instead of writing typedef we can write 'using' with a similar syntax

using text_t = std::string;
// OR
typedef int number_t;

int main()
{
    // Now instead of writing std::string we can just write text_t

    text_t name = "\nParth \n";
    number_t age = 16;

    std::cout << name;
    std::cout << "You are " << age << " years old\n\n";

    return 0;
}