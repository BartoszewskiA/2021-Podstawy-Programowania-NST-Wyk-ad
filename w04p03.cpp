#include <iostream>

using namespace std;

double srednia(int a, int b);
// int srednia(int a, int b); - zle
double srednia(int a, int b, int c);
double srednia(double a, double b);

    int main()
{
    cout << srednia(10, 20);
    cout << endl;
    cout << srednia(10, 20, 30);
    cout << endl;
    cout << srednia(10.5, 3.14);
    return 0;
}

double srednia(int a, int b)
{
    cout << "srednia 2 liczb: ";
    return (a + b) / 2.0;
}

// int srednia(int a, int b) - zle
// {
//     cout << "srednia 2 liczb zaokraglona: ";
//     return (a + b) / 2;
// }

double srednia(int a, int b, int c)
{
    cout << "srednia 3 liczb: ";
    return (a + b + c) / 3.0;
}

double srednia(double a, double b)
{
    cout << "srednia 2 liczb typu double: ";
    return (a + b) / 3;
}