#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int *L = new int[n1];
    int *R = new int[n2];

    // copy the element
    int k = s;
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[k + i];
    }

    k = mid + 1;
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[k + i];
    }

    int i = 0, j = 0;
    k = s;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{

    int arr[] = {5, 2, 4, 6, 3, 1, 8, 9};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}