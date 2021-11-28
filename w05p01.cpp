#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie;
    cout << "Przedstaw sie: ";
    //cin>>imie;
    getline(cin, imie);
    //string s = "czesc "+imie+"!";
    string s = "Czesc";
    s += " ";
    s += imie;
    s += "!";
    cout << s;
    return 0;
}