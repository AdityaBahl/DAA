#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(a[i]);
    for (int i = 0; i < k; i++)
        pq.pop();
    int max = pq.top();
    for (int i = 0; i < n - k - k; i++)
        pq.pop();
    int min = pq.top();
    cout << max << "-->" << min << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}