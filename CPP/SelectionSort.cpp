#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int l);
void swap(int *x, int *y);
void display(int *arr, int l);

int main()
{
    int arr[] = {9, 8, 3, 1, 2, 5, 6, 7, 4, 10};
    int l = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, l);
    display(arr, l);
    cout << l << endl;
    return 0;
}

void selectionSort(int arr[], int n)
{
    int i, j, m;
    for (i = 0; i < n - 1; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[m])
            {
                m = j;
            }
        }
            if (m != i)
            {
                swap(&arr[m], &arr[i]);
            }
        }
    }


void swap(int *x, int *y)
{
    int *z;
    *z = *x;
    *x = *y;
    *y = *z;
}

void display(int *arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << "" << endl;
}