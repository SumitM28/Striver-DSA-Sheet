#include <bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end)
{
    int pivot = input[start];

    int i = start, j = end;

    while (i < j)
    {
        while (input[i] <= pivot && i <= end - 1)
        {
            i++;
        }
        while (input[j] > pivot && j >= start + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(input[i], input[j]);
        }
    }
    swap(input[start], input[j]);
    return j;
}

void quickSort(int input[], int start, int end)
{
    if (start >= end)
        return;

    int partition = partitionArray(input, start, end);
    quickSort(input, start, partition - 1);
    quickSort(input, partition + 1, end);
}

int main()
{

    int arr[] = {5, 2, 4, 6, 3, 1, 8, 9};
    int n = 8;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}