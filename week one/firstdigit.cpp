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
    int a;
    cin >> a;
    int b = a / 1000;
    if (b % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
    return 0;
}