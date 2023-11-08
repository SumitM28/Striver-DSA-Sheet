#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
void moveZeros(vector<int> &a, int n)
{

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j++] = a[i];
        }
    }

    while (j < n)
    {
        a[j++] = 0;
    }
}
int main()
{

    vector<int> arr = {4, 0, 3, 2, 5};
    cout << "Before:" << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    moveZeros(arr, arr.size());
    cout << "After:" << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
}