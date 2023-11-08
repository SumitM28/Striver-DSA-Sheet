#include <bits/stdc++.h>
using namespace std;
int size(int n)
{

    int count = 0;

    while (n != 0)
    {

        n = n / 10;

        count++;
    }

    return count;
}

bool checkArmstrong(int n)
{

    // Write your code here

    int length = size(n);

    int ans = 0;

    int temp = n;

    if (n == 1)
    {

        return true;
    }

    while (temp > 0)
    {

        int digit = temp % 10;

        int p = pow(digit, length);

        ans = ans + p;

        temp = temp / 10;
    }

    if (ans == n)
    {

        return true;
    }

    else
    {

        return false;
    }
}

int main()
{

    int n = 153;

    bool ans = checkArmstrong(n);
    cout << ans << endl;
    return 0;
}
