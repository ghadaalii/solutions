#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int num1 = n[0] - '0';
    int num2 = n[1] - '0';
    if (num2 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    if ((num1 % num2 == 0) || (num2 % num1 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}