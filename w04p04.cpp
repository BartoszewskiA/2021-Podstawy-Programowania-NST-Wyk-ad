#include <iostream>

using namespace std;

int a = 10;

void funkcja();

int main()
{
    a = a+100;
    funkcja();
    return 0;
}

void funkcja()
{
    cout << a;
}