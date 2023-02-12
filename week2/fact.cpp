#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            fact *= j;
        }
        cout << fact << endl;
    }
}