#include <iostream>
using namespace std;
inline void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void merge(int a[], int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;
    int b[r - l + 1];
    while (i <= m and j <= r)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > m)
    {
        while (j <= r)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else if (j > r)
    {
        while (i <= m)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (int i = l; i <= r; i++)
    {
        a[i] = b[i - l];
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergesort(a, 0, n - 1);
    display(a, n);
    return 0;
}