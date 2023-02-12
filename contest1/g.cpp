#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k, res = 0;
    cin >> n >> m >> k;
    if (n == 0 && k == 0)
    {
        cout << 0;
    }
    else
    {
        if (m == 0)
        {
            res = min(n, k);
            cout << res << endl;
        }
        else if ((m >= n && m >= k) || (m >= n && m <= k) || (m <= n && m >= k))
        {
            res = min(n, k);
            cout << res << endl;
        }
        else if ((m < n) && (m < k))
        {
            res = m;
            n -= m;
            k -= m;
            res += mim(n / 2, k);
            cout << res << endl;
        }
    }
}