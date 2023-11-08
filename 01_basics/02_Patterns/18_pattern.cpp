/*
pattern 18th
    C
    C B
    C B A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int start = 65 + n - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << (char)start << " ";
            start = start - 1;
        }
        cout << endl;
    }
}