#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("w01p01.cpp", ios::in);
    if (!plik.good())
    {
        cout << "brak pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s << endl;
    }

    plik.close();
    return 0;
}