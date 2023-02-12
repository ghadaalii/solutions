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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log(a) > d * log(c))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}