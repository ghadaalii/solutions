#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter;
    cin >> counter;
    for (int i = 2; i <= counter; i++)
    {
        int res = prime(i);
        if (res != 0)
        {
            cout << res << endl;
        }
    }
}
int prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return num;
}
