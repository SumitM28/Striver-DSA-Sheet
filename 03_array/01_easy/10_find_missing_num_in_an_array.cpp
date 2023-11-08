#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int missingNumber(vector<int> &nums)
{
    //     if(nums.size()==1){
    //         if(nums[0]==1) return 0;
    //         else return 1;
    //     }
    //     sort(nums.begin(),nums.end());
    //     if(nums[0]==1) return 0;
    //    for(int i=1;i<nums.size();i++){
    //        if(nums[i]-nums[i-1]>1) return nums[i-1]+1;
    //    }

    //     return nums.size();

    int x = 0;
    for (int l : nums)
    {
        x ^= l;
    }
    for (int i = 0; i <= nums.size(); i++)
    {
        x ^= i;
    }
    return x;
}

int main()
{

    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int ans = missingNumber(arr);
    cout << ans << endl;
}