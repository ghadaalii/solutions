#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i <= 12; i++)
    {
        cout << num << " * " << i << " = " << num * i;
    }
}