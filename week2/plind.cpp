#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    int value1, value2;
    cin >> num;
    int size = num.size();
    char num1[size];
    int counter;
    for (int i = size - 1; i >= 0; i--)
    {
        num1[counter] = num[i];
        counter++;
    }
    stringstream s1;
    s1 << num;
    s1 >> value1;
    stringstream s2;
    s2 << num1;
    s2 >> value2;
    cout << value2 << endl;
    if (value1 == value2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}