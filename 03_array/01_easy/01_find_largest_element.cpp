#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int largestElement(vector<int> &arr, int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = max(ans, arr[i]);
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {4, 2, 1, 8, 6, 7, 9};
    int ans = largestElement(arr, arr.size());
    cout << ans << endl;
}