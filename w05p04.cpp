#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int DL = 3;
    string tablica[DL];
    for (int i=0; i<DL; i++)
        {
            cout<<"Podaj tekst "<<i+1<<" : ";
            getline(cin,tablica[i]);
        }
    cout<<endl;
    for (int i=0; i<DL; i++)
    cout<<"\""<<tablica[i]<<"\"";
    return 0;
}