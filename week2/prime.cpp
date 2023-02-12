#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int flage = 0;
    if (num == 0 || num == 1)
    {
        flage = 1;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flage = 1;
            break;
        }
    }
    if (flage == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}