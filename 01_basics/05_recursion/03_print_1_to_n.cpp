#include <bits/stdc++.h>
using namespace std;

void solve(int n, int s)
{
    if (s > n)
        return;

    cout << s << " ";
    solve(n, s + 1);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    solve(n, 1);
}