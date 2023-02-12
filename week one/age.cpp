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
    int x = a / 365;
    cout << x << " years" << endl;
    int n = a - (365 * x);
    int m = n / 30;
    cout << m << " months" << endl;
    int d = n - (m * 30);
    cout << d << " days";
    return 0;
}
int a;
cin >> a;
int x = a / 365;
cout << x << " years" << endl;
int n = a - (365 * x);
int m = n / 30;
cout << m << " months" << endl;
int d = n - (m * 30);
cout << d << " days";
return 0;
}