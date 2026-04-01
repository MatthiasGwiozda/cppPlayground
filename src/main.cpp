
#include <iostream>
#include "cat/Cat.h"
using namespace std;

int main2()
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

int main()
{
    Cat cat("Lino");
    cat.purr();
    // main2();
    return 0;
}
