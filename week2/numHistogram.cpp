#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char symbol;
    cin >> symbol;
    int num;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        int times;
        cin >> times;
        for (int j = 0; j <= times; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}