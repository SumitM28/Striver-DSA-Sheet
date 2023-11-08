/*
pattern 22st
    555555555
    544444445
    543333345
    543222325
    543212345
    543222325
    543333345
    544444445
    555555555
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << n;
            else
                cout << j;
        }
        cout << endl;
    }
}