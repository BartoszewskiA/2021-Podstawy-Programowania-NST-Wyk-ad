#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Podaj dlugosc tablicy: ";
    cin >> ile;
    //int tab[ile];
    int* tab = new int[ile];

    for (int i=0; i<ile; i++)
      tab[i]=0;

    delete [] tab;
    return 0;
}