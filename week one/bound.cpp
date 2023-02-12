#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
    fast();
    int a, b, c, d;
    int n, m;
    cin >> a >> b >> c >> d;
    if (c > b && a < d || a > d && b > c)
        cout << -1;
    else
    {
        n = max(a, b);
        m = min(c, d);
        if (n < m)
            cout << n << " " << m;
        else
            cout << m << " " << n;
    }
    return 0;
}