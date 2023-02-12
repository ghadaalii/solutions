#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ma, mi;
    ma = max(a, b);
    ma = max(ma, c);
    mi = min(a, b);
    mi = min(mi, c);
    cout << ma << " " << mi;
    return 0;
}