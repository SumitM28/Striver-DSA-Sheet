#include <bits/stdc++.h>
using namespace std;

/*
    i/p = 123
    o/p = 3

*/

int countDigits(int n)
{
    int cnt = (int)log10(n) + 1;
    return cnt;
}

int main()
{
    int num;
    cin >> num;
    int ans = countDigits(num);
    cout << ans << endl;
}