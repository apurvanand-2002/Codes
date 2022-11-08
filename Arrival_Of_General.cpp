#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int A[t];
    int maxin, minin;
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
    }
    int maxo = A[0];
    int mini = A[0];
    for (int i = 1; i < t; i++)
    {
        if (A[i] > maxo)
        {
            maxo = A[i];
            maxin = i;
        }
        if (A[i] <= mini)
        {
            mini = A[i];
            minin = i;
        }
    }
    if (maxin < minin)
    {
        // cout<<maxin<<" "<<minin<<endl;
        cout << (maxin + t - minin - 1) << endl;
    }
    else
    {
        // cout<<maxin<<" "<<minin<<endl;
        cout << (maxin + (t - (minin + 1) - 1)) << endl;
    }
}