#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, string &str)
{
    if (i >= j)
    {
        return;
    }
    swap(str[i], str[j]);
    solve(i + 1, j - 1, str);
}

string reverseString(int n, string &str)
{
    int i = 0, j = n - 1;
    solve(i, j, str);

    return str;
}

int main()
{

    string str = "sumit";

    reverseString(str.size(), str);

    cout << str << " ";
}