/*
pattern 17th
    A
  A B A
A B C B A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int start = 65;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * i + 1) / 2 + 1; j++)
        {
            cout << (char)start << " ";
            start += 1;
        }
        start -= 2;
        for (int j = 0; j < (2 * i + 1) / 2; j++)
        {
            cout << (char)start << " ";
            start--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << '\n';
    }
}