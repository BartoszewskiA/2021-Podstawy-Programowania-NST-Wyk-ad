#include <iostream>

using namespace std;

int nowa_funkcja(int &x, int &y);

int main()
{
    int x = 10;
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "przed wykonaniem funkcji: " << a << " " << b << endl;
    cout << nowa_funkcja(a, b)<<endl;
    cout << "po wykonaniu funkcji: " << a << " " << b << endl;
    return 0;
}

int nowa_funkcja(int &a, int &b)
{
    cout << "to ja nowa funkcja" << endl;
    a = 10;
    b = 20;
    int wynik = a + b;
    return wynik;
}