#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, imie="", nazwisko="";
    int pozycja_spacji = -1;
    cout<<"Przedstaw sie: ";
    getline(cin, s);
    // for (int i=0; i<s.length(); i++)
    //     if (s[i]==' ') pozycja_spacji=i;
    pozycja_spacji = s.find(' ');
    imie = s.substr(0,pozycja_spacji);
    cout<<pozycja_spacji<<endl;
    cout<<"imie:"<<imie<<";"<<endl;
    nazwisko = s.substr(pozycja_spacji+1 , s.length()-pozycja_spacji);
    cout<<"nazwisko:"<<nazwisko<<";";
    return 0;
}