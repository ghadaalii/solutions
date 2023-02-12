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
    int c = a;
    if (a == 'z')
        cout << "a";
    else if (c >= 97 && c <= 122)
    {
        c++;
        a = c;
        cout << a;
    }
    return 0;
}