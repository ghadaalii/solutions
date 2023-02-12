/* #include <iostream>
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
    long long a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c)
        cout << a << endl
             << b << endl
             << c;
    else if (a <= c && c <= b)
        cout << a << endl
             << c << endl
             << b << endl;
    else if (b <= a && a <= c)
        cout << b << endl
             << a << endl
             << c << endl;
    else if (b <= c && c <= a)
        cout << b << endl
             << c << endl
             << a << endl;
    else if (c <= a && a <= b)
        cout << c << endl
             << a << endl
             << b << endl;
    else if (c <= b && b <= a)
        cout << c << endl
             << b << endl
             << a << endl;

    cout << endl;
    cout << a << endl
         << b << endl
         << c;
    return 0;
} */

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
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        if (b <= c)
            cout << a << endl
                 << b << endl
                 << c << endl;
        else
            cout << a << endl
                 << c << endl
                 << b << endl;
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
            cout << b << endl
                 << a << endl
                 << c << endl;
        else
            cout << b << endl
                 << c << endl
                 << b << endl;
    }
    else if (c <= a && c <= b)
    {
        if (a <= b)
            cout << c << endl
                 << a << endl
                 << b << endl;
        else
            cout << c << endl
                 << b << endl
                 << a << endl;
    }
    cout << "\n"
         << a << endl
         << b << endl
         << c;
    return 0;
}