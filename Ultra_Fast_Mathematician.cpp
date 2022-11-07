#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    vector<int> ans;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(0);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "";
    }
}