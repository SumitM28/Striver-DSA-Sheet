#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int linearSearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {4, 0, 3, 2, 5};
    int ans = linearSearch(arr.size(), 3, arr);
    cout << ans << endl;
}