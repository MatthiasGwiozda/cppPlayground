#include <string>
#include <iostream>
using namespace std;

class Cat
{
public:
    Cat(string name)
    {
        this->name = name;
    }

    void purr()
    {
        cout << this->name + " purrs";
    }

private:
    string name;
};
