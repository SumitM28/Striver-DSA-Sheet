/*
pattern 5th

    * * *
    * *
    *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}