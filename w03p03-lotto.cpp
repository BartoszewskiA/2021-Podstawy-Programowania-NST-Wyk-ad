#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int ile = 0, pozycja;
    int maszyna_los[50];
    for (int i = 0; i < 50; i++)
        maszyna_los[i] = 1;

    while (ile <= 6)
    {
        pozycja = rand() % 49 + 1;
        if (maszyna_los[pozycja] == 1)
        {
            cout << pozycja << " ";
            ile++;
            maszyna_los[pozycja]=0;
        }
    }
    return 0;
}