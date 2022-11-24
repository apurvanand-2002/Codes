#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        map<long long int, long long int> count;
        long long int n;
        cin >> n;
        long long int A[n];
        for (long long int j = 0; j < n; j++)
        {
            cin >> A[j];
            count[A[j]]++;
        }
        long long int maxi = count[A[0]];
        for (auto i : count)
        {
            if (i.second > maxi)
            {
                maxi = i.second;
            }
        }
        if (n == 0 || n == 1 || n == 2)
        {
            cout << "0" << endl;
        }
        else if (maxi == 1)
        {
            cout << (n - 2) << endl;
        }
        else
        {
            cout << (n - maxi) << endl;
        }
    }
    return 0;
}
