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
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '>' && a > b)
        cout << "Right";
    else if (c == '>' && a < b)
        cout << "Wrong";
    else if (c == '<' && a > b)
        cout << "Wrong";
    else if (c == '<' && a < b)
        cout << "Right";
    else if (c == '=' && a == b)
        cout << "Right";
    else if (c == '=' && a < b)
        cout << "Wrong";
    else if (c == '=' && a > b)
        cout << "Wrong";
    else if (c == '<' && a == b)
        cout << "Wrong";
    else if (c == '>' && a == b)
        cout << "Wrong";
    return 0;
}