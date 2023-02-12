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
    float a;
    cin >> a;
    if (a >= 0 && a <= 25)
        cout << "Interval [0,25]";
    else if (a > 25 && a <= 50)
        cout << "Interval (25,50]";
    else if (a > 25 && a <= 75)
        cout << "Interval (50,75]";
    else if (a > 75 && a <= 100)
        cout << "Interval (75,100]";
    else
        cout << "Out of Intervals";
    return 0;
}