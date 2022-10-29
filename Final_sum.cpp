#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, q;
        cin >> n >> q;
        int A[n];
        for (int j = 0; j < n; j++)
        {
            cin >> A[j];
        }
        long long int sum = 0;
        for (int t = 0; t < n; t++)
        {
            sum = sum + A[t];
        }
        for (long long int k = 0; k < q; k++)
        {
            long long int l, r;
            cin >> l >> r;
            if ((r - l) % 2 == 0)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
