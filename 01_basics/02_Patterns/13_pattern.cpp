/*
pattern 13th
    1
    2 3
    4 5 6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    int val = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
}