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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int flag = 0;
    long long res1 = (a * b) - c;
    long long res2 = (a * b) + c;
    long long res3 = a - (b * c);
    long long res4 = a + (b * c);
    long long res5 = (a - b) + c;
    long long res6 = (a + b) - c;
    if (res1 == d)
    {
        flag = 1;
    }
    if (res2 == d)
    {
        flag = 1;
    }
    if (res3 == d)
    {
        flag = 1;
    }
    if (res4 == d)
    {
        flag = 1;
    }
    if (res5 == d)
    {
        flag = 1;
    }
    if (res6 == d)
    {
        flag = 1;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}