/*
pattern 16th
    A
    B B
    C C C

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int start = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(start) << " ";
        }
        start++;
        cout << endl;
    }
}