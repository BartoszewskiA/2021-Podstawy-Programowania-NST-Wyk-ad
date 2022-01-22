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

int main()
{
    osoba pracownicy[LICZBA_PRACOWNIKOW];

    for (int i = 0; i < LICZBA_PRACOWNIKOW; i++)
    {
        cout << "Imie:";
        cin >> pracownicy[i].imie;
        cout << "Nazwisko:";
        cin >> pracownicy[i].nazwisko;
        cout << "wiek:";
        cin >> pracownicy[i].wiek;
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