#include <iostream>

using namespace std;

int main()
{
    int tab[] = {101, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i=0; i<13;i++)
        cout <<*(tab+i)<<" ";

    // for (int i=0; i<13; i++)
    //     cout<<tab[i]<<" ";
    return 0;
}