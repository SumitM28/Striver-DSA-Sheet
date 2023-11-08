#include <bits/stdc++.h>
using namespace std;

void findFib(int n, vector<int> &fib)
{

    if (n < 1)
    {

        return;
    }

    if (n == 1)
    {

        fib.push_back(0);

        return;
    }

    if (n == 2)
    {

        fib.push_back(0);

        fib.push_back(1);

        return;
    }

    findFib(--n, fib);

    fib.push_back(fib[n - 1] + fib[n - 2]);
}

vector<int> generateFibonacciNumbers(int n)
{

    // Write your code here.

    vector<int> fib;

    findFib(n, fib);

    return fib;
}
int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    for (auto val : generateFibonacciNumbers(n))
    {
        cout << val << " ";
    }
}