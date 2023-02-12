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
    int x, p;
    float a;
    cin >> x >> p;
    a = (float(p) * 100) / (100 - float(x));
    float value = round(a * 100) / 100;
    cout << value;
    return 0;
}