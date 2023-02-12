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
    char a;
    cin >> a;
    int x = a;
    if (x >= 47 && x <= 57)
        cout << "IS DIGIT";
    else if (x >= 65 && x <= 90)
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    else if (x >= 97 && x <= 122)
        cout << "ALPHA" << endl
             << "IS SMALL";
    return 0;
}