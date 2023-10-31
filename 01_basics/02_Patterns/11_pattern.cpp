/*
pattern 11th
    1
    0 1
    1 0 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}