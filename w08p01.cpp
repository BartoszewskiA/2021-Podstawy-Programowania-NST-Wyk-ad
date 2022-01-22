#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    int* adres_x;
    adres_x = &x; 

    (*adres_x)++;
    cout<<"x="<<x<<endl;
    cout<<*adres_x;
    return 0;
}