#include <bits/stdc++.h>
using namespace std;

/*
    i/p = 6
    o/p = 1610612736

*/

long reverseBits(long n)
{
    long long num = 0;
    for (int i = 0; i < 32; i++)
    {

        long long ans = n & 1;

        long long reverse = ans << (31 - i);

        num = num | reverse;

        n = n >> 1;
    }

    return num;
}
int main()
{
    int num;
    cin >> num;
    long ans = reverseBits(num);
    cout << ans << endl;
}