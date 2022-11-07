#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    if (n % 2 == 1)
    {
        cout << (-1) << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        for (int i = 0; i < n; i = i + 2)
        {
            int t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}