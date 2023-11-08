#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi = 0;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            temp++;
        }
        else
        {
            maxi = max(maxi, temp);
            temp = 0;
        }
    }
    maxi = max(maxi, temp);
    return maxi;
}

int main()
{

    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int ans = findMaxConsecutiveOnes(arr);
    cout << ans << endl;
}