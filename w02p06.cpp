#include <iostream>

using namespace std;
int main()
{
    int x, i = 0, s = 0;
    do
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x;
        if (x < 0) break;
        s+=x;
        i++;
    } while (1);

    // for (int i=0; 1 ; i++)
    // {
    //     cout << "x[" << i + 1 << "]=";
    //     cin >> x;
    //     if (x < 0) break;
    //     s = s + x;
    // }

    cout << "Suma=" << s << endl
         << "Srednia=" << (double)s / i;
    return 0;
}
