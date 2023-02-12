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
    double num;
    int x;
    cin >> num;
    x = num;
    if (x == num)
        cout << "int " << x;
    else
        cout << "float " << x << " " << num - x;
    return 0;
}