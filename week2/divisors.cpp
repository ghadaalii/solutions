#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++ code here
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}