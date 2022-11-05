#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.size();
    int upperc = 0, lowerc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
        {
            lowerc++;
        }
        else
        {
            upperc++;
        }
    }
    if (upperc > lowerc)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 97 && a[i] <= 122)
                a[i] = a[i] - 32;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 65 && a[i] <= 90)
                a[i] = a[i] + 32;
        }
    }
    cout << a << endl;
}