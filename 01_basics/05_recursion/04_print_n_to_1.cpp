#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n <= 0)
        return;

    cout << n << " ";
    solve(n - 1);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    solve(n);
}