#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int item_to_change = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[item_to_change] > arr[j])
            {
                item_to_change = j;
            }
        }

        swap(arr[i], arr[item_to_change]);
    }
}

int main()
{

    int arr[] = {5, 8, 3, 4, 1, 6, 2};
    int n = 7;

    cout << "Elements before sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr, n);
    cout << "Elements after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}