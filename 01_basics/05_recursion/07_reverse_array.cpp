#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<int> &nums)
{
    if (i >= j)
    {
        return;
    }
    swap(nums[i], nums[j]);
    solve(i + 1, j - 1, nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    int i = 0, j = n - 1;
    solve(i, j, nums);

    return nums;
}

int main()
{

    int n = 6;
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    reverseArray(n, nums);
    for (auto val : nums)
    {
        cout << val << " ";
    }
}