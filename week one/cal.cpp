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
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+')
        cout << a + b;
    else if (c == '-')
        cout << a - b;
    else if (c == '*')
        cout << a * b;
    else if (c == '/')
        cout << a / b;
    return 0;
}