#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
vector<int> getSecondOrderElements(vector<int> arr, int n)
{
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    int secLargest = INT_MIN;
    int secSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secLargest && arr[i] != largest)
        {
            secLargest = arr[i];
        }
        if (arr[i] < secSmallest && arr[i] != smallest)
        {
            secSmallest = arr[i];
        }
    }

    return {secLargest, secSmallest};
}

int main()
{

    vector<int> arr = {4, 2, 1, 8, 6, 7, 9};
    vector<int> ans = getSecondOrderElements(arr, arr.size());
    cout << "Second Largest Element is " << ans[0] << endl;
    cout << "Second Smallest Element is " << ans[1] << endl;
}