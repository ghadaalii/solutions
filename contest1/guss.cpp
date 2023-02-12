#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, k, n;
    cin >> k >> n >> a;
    double res = (n * k) / a;
    long long rres = res;
    double rrres = res - rres;
    if (rrres > 0)
    {
        cout << "double" << endl;
        return 0;
    }
    if (rrres <= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }
}