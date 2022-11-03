#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    long long int a;
    for (long long int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        long long int A[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> A[i];
            if ((A[i] % 2) != 0)
            {
                A[i]--;
            }
        }
        sort(A, A + n);
        a = 0;
        for (int i = 0; i < n;)
        {
            long long int j = i;
            while (A[i] == A[j] && i < n)
            {
                i++;
            }
            a = max(a, (i - j));
        }
        cout << (n - a) << endl;
    }
    return 0;
}
