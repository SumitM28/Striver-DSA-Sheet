#include <bits/stdc++.h>
using namespace std;

/*
    i/p = 121
    o/p = true

*/

bool isPalindrome(int x)
{

    // approach 2nd
    if (x < 0)
        return false;
    long int temp = x;
    long int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum = sum * 10 + digit;
        temp /= 10;
    }

    if (x != sum)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int num;
    cin >> num;
    long ans = isPalindrome(num);
    cout << ans << endl;
}