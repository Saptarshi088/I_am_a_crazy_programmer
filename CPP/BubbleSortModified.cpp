#include "bits/stdc++.h"
using namespace std;

void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void bubblesort(int arr[], int n)
{
    int m;
    bool val = true;
    while (val)
    {
        val = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);

                val = true;
            }
        }
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    cout << "\n\n"
         << endl;
    bubblesort(arr, n);
    display(arr, n);

    return 0;
}
