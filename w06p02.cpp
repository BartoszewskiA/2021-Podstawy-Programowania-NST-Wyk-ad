#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("dane.txt", ios::out);
    if (!plik.good())
    {
        cout << "Blad";
        return 0;
    }
    
    plik.close();
    return 0;
}