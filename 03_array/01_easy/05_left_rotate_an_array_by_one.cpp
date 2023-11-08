#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
void rotateArray(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
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
    rotateArray(arr, arr.size());
    cout << "After rotate:" << endl;
    for (auto val : arr)
    {
        cout << val << " ";
    }
}