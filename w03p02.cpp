#include <iostream>

using namespace std;

int main()
{
    int x, n=0;  //n - aktualna dlugosc tablicy (wykorzystana)
    int tab[50];
    cout<<"x=";
    cin>>x;
    do
    {
        tab[n] = x % 2;
        n++;
        x = x / 2;
    } while (x>0);
    
    for (int i=n-1; i>=0; i--)
        cout<<tab[i];

    return 0;
}