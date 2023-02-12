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
    long long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if (a % k == 0 && b % k != 0)
        cout << "Memo";
    else if (a % k != 0 && b % k == 0)
        cout << "Momo";
    else if (a % k != 0 && b % k != 0)
        cout << "No One";
    return 0;
}