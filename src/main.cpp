
#include <iostream>
#include "cat/Cat.h"
using namespace std;

int stringTest()
{
    char a[] = "asdf223332";
    int b[] = {1, 2};
    string c = "afasdf";
    std::cout << c;
    return 0;
}

void testNumber()
{
    int i = 1;
    int b = ++i;
    cout << b;
}

struct A
{
    int x;
    int y;
    int z = 123;
};

void structTestCpp20()
{
    A a{.x = 1, .z = 2}; // a.x == 1, a.y == 0, a.z == 2
    cout << a.y;
}

void catTest()
{
    Cat cat("Lino3");
    cat.purr();
}

int main()
{
    structTestCpp20();
    // catTest();
    // main2();
    return 0;
}