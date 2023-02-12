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
    char a;
    cin >> a;
    int b = a;
    if (b >= 65 && b <= 90)
    {
        b += 32;
        cout << char(b);
    }
    else
    {
        b -= b;
        cout << char(b);
    }
    return 0;
}