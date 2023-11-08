#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
void rotateArray(vector<int> &arr, int k)
{

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << "Before rotate:" << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    rotateArray(arr, 2);
    cout << "After rotate:" << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
}