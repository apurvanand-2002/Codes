#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(51, 1);
    A[0] = 0;
    A[1] = 0;
    for (int i = 2; i < 51; i++)
    {
        for (int j = (i + i); j < 51; j = j + i)
        {
            if (A[j] != 0)
            {
                A[j] = 0;
            }
        }
    }
    vector<int> prime;
    for (int i = 0; i < 51; i++)
    {
        if (A[i] != 0)
        {
            prime.push_back(i);
        }
    }
    int flag = 0;
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i] == n && prime[i + 1] == m)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}