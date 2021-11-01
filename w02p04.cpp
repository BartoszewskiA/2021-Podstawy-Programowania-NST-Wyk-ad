#include <iostream>

using namespace std;
int main()
{

    int x;
    cout<<"x=";
    cin>>x;
    // while (x>0)
    // {
    //     cout<<x%2;
    //     x = x/2;
    // }
    do
    {
        cout<<x%2;
        x = x/2;
    } while (x>0);
    

    return 0;
}
