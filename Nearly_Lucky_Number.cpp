#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    cin >> num;
    long long int t = num;
    long long int count = 0;
    while (num > 0)
    {
        int p = num % 10;
        if (p == 4 || p == 7)
        {
            count++;
        }
        num = num / 10;
    }
    int p = count;
    int flag = 0;
    while (count > 0)
    {
        int t = count % 10;
        if (t == 4 || t == 7)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
        count = count / 10;
    }
    if (flag == 0 && p != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}