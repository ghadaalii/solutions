#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    bool ispalin = true;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j <= n / 2;j++)
    {
        if (arr[j] != arr[n-j-1])
        {
            ispalin = false;
            break;
        }
    }
    if (ispalin)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}