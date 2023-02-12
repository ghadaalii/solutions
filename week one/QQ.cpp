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
    float a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
        cout << "Q1";
    else if (a < 0 && b > 0)
        cout << "Q2";
    else if (a < 0 && b < 0)
        cout << "Q3";
    else if (a > 0 && b < 0)
        cout << "Q4";
    else if (a == 0 && b == 0)
        cout << "Origem";
    else if ((a > 0 || a < 0) && b == 0)
        cout << "Eixo X";
    else if (a == 0 && (b < 0 || b > 0))
        cout << "Eixo Y";
    return 0;
}