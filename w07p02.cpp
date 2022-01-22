#include <iostream>
#include <string>

using namespace std;

const int LICZBA_PRACOWNIKOW = 3;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    bool zaszczepiony;
};

int ma1in()
{
    osoba pracownicy[LICZBA_PRACOWNIKOW];
    string temp;

    for (int i = 0; i < LICZBA_PRACOWNIKOW; i++)
    {
        cout << "Imiona:";
        getline(cin,pracownicy[i].imie);
        cout << "Nazwisko:";
        getline(cin,pracownicy[i].nazwisko);
        cout << "wiek:";
        // cin >> pracownicy[i].wiek;
        // getline(cin,temp); 
        // pobranie naku końca wiersza, który został w buforze
        getline(cin,temp);
        pracownicy[i].wiek = atoi(temp.c_str());

        pracownicy[i].zaszczepiony = true;
    }

    for (int i = 0; i < LICZBA_PRACOWNIKOW; i++)
        if (pracownicy[i].zaszczepiony == true)
            cout << "Nazwisko: " << pracownicy[i].nazwisko
                 << " imie: " << pracownicy[i].imie
                 << " wiek: " << pracownicy[i].wiek
                 << endl;

    return 0;
}