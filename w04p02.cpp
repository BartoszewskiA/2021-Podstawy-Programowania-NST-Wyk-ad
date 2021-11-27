#include <iostream>

using namespace std;

int nowa_funkcja(int x=10, int y=10);

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << nowa_funkcja(a,b) << endl;
    return 0;
}

int nowa_funkcja(int a, int b)
{
    int wynik = a + b;
    return wynik;
}