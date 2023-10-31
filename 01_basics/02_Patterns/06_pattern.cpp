/*
pattern 6th

    1 2 3 4
    1 2 3
    1 2
    1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    while (n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        n--;
    }
}