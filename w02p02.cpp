#include <iostream>

using namespace std;
int main()
{
    int x, i = 0, s = 0;
    do
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x;
        if (x >= i)
        {
            s = s + x;
            i++;
        }
    } while (x >= 0);

    cout << "Suma=" << s << endl
         << "Srednia=" << (double)s / i;
    return 0;
}
