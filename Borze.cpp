#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '.')
        {
            cout << '0';
        }
        if (a[i] == '-' && a[i + 1] == '.')
        {
            cout << '1';
            i++;
        }
        if (a[i] == '-' && a[i + 1] == '-')
        {
            cout << '2';
            i++;
        }
    }
    cout << endl;
}