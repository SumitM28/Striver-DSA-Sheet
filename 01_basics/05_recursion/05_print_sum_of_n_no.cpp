#include <bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n)
{
    if (n == 1)
        return 1;
    return n + sumFirstN(n - 1);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << sumFirstN(n) << endl;
}