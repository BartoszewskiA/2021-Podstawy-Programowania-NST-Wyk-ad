#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string tab[1000];
    int n = 0;
    //otwarcie pliku do odczytu i skopiowanie zawartosci do tablicy
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "brak pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();
    // otwarcie pliku do zapisu i zapis danych z tablicy

    plik.open("wynik.txt", ios::out);
    if (!plik.good())
    {
        cout << "blad";
        return 0;
    }
    // for (int i = 0; i<n; i++)
    //     if (tab[i].length()>0) plik<<tab[i]<<endl;
    string s;
    for (int i = n - 1; i >= 0; i--)
    {
        s = "";
        for (int j = tab[i].length() - 1; j >= 0; j--)
            s += tab[i][j];
        plik << s << endl;
    }
    plik.close();

    return 0;
}