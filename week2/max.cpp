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
    int n;
    cin >> n;
    int max = 0;
    for (int i = 0; i <= n; i++)
    {
        int num;
        cin >> num;
        if (i == 1)
        {
            max = num;
        }
        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;
}