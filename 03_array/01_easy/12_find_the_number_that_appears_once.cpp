#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
int getSingleElement(vector<int> &arr)
{
    int x = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        x ^= arr[i];
    }

    return x;
}

int main()
{

    vector<int> arr = {1, 1, 2, 2, 3};
    int ans = getSingleElement(arr);
    cout << ans << endl;
}