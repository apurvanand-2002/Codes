#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        long long int l;
        cin >> l;
        string A;
        cin >> A;
        int flag = 0;
        if (l == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        long long int n = A.size();
        for (long long int i = 0; i < n;)
        {
            long long int j = i;
            while (A[i] == A[j] && i < n)
            {
                i++;
            }
            long long int s = (i - j);
            if (s % 2 != 0)
            {
                if (A[j] == '1')
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
