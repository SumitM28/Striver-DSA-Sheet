#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
bool isSorted(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return 0;
    }
    return 1;
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    bool ans = isSorted(arr, arr.size());
    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}