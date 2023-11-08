#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int removeDuplicates(vector<int> &arr, int n)
{
    int ans = 1;
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == temp)
        {
            continue;
        }
        else
        {
            temp = arr[i];
            ans++;
        }
    }

    return ans;
}
int main()
{

    vector<int> arr = {1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6};
    int ans = removeDuplicates(arr, arr.size());
    cout << ans << endl;
}