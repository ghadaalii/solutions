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
    int a, b, c;
    char g, h;
    cin >> a >> g >> b >> h >> c;
    if (g == '+')
    {
        if (a + b == c)
            cout << "Yes";
        else
            cout << a + b;
    }
    if (g == '-')
    {
        if (a - b == c)
            cout << "Yes";
        else
            cout << a - b;
    }
    if (g == '*')
    {
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
    }
    return 0;
}