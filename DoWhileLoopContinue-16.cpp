#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        if (i == 3)
        {
            i++;
            continue;
        }
        cout << "sandy " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}