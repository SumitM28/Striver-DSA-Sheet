/*
pattern 15th
    A B C
    A B
    A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int start = 65;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)(start + j) << " ";
        }
        cout << endl;
    }
}