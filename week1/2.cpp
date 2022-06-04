#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, x;
    cin >> n;
    int a[n], k = n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    i = 0;
    int low = 0, high = n - 1;
    int mid;
    while (low <= high)
    {
        i++;
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            cout << "Found At Position " << mid << "\n";
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    if (low > high)
        cout << "Not Found ";
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}