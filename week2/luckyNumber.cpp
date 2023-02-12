#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int luckyNumbers[100000] = {0};
    int num1, num2;
    cin >> num1 >> num2;
    int flage = 0;
    luckyNumbers[4] = 1;
    luckyNumbers[7] = 1;
    luckyNumbers[47] = 1;
    luckyNumbers[44] = 1;
    luckyNumbers[74] = 1;
    luckyNumbers[77] = 1;
    luckyNumbers[444] = 1;
    luckyNumbers[447] = 1;
    luckyNumbers[474] = 1;
    luckyNumbers[477] = 1;
    luckyNumbers[777] = 1;
    luckyNumbers[747] = 1;
    luckyNumbers[774] = 1;
    luckyNumbers[744] = 1;
    luckyNumbers[4444] = 1;
    luckyNumbers[4447] = 1;
    luckyNumbers[4477] = 1;
    luckyNumbers[4777] = 1;
    luckyNumbers[7777] = 1;
    luckyNumbers[7444] = 1;
    luckyNumbers[7744] = 1;
    luckyNumbers[7774] = 1;
    luckyNumbers[77777] = 1;
    luckyNumbers[77774] = 1;
    luckyNumbers[77744] = 1;
    luckyNumbers[77444] = 1;
    luckyNumbers[74444] = 1;
    luckyNumbers[44444] = 1;
    luckyNumbers[47444] = 1;
    luckyNumbers[47744] = 1;
    luckyNumbers[47774] = 1;
    luckyNumbers[47777] = 1;
    for (int i = num1; i <= num2; i++)
    {
        if (luckyNumbers[i] == 1)
        {
            cout << i << " ";
            flage = 1;
        }
    }
    if (flage == 0)
    {
        cout << -1 << endl;
    }
}