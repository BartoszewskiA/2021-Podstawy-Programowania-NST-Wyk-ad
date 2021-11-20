#include <iostream>

using namespace std;

int main()
{
    int tab[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Tab["<<i<<"]=";
        cin>>tab[i];
    }

    for (int i=9; i>=0; i--)
        cout<<"{"<<tab[i]<<"} ";
    return 0;
}