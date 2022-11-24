#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int A[n];
        long long int both = 0, bob = 0, alice = 0;
        for (long long int j = 0; j < n; j++)
        {
            cin >> A[j];
            if (A[j] % a == 0 && A[j] % b == 0)
            {
                both++;
            }
            else if (A[j] % a == 0)
            {
                bob++;
            }
            else if (A[j] % b == 0)
                alice++;
        }
        cout << (((bob + (both > 1)) > alice) ? "BOB" : "ALICE") << endl;
    }
}
