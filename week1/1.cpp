#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t, x, i;
    cin >> t;
    int a[t];
    for (i = 0; i < t; i++)
        cin >> a[i];
    cin >> x;
    for (i = 0; i < t; i++)
    {
        if (a[i] == x)
            break;
    }
    if (i != t)
        cout << "Present " << i + 1 << endl;
    else
        cout << "Not Present " << t << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}