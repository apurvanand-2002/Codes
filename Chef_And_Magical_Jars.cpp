#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int count = 0;
        long long int n;
        cin >> n;
        long long int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            count = count + (A[i] - 1); // as then no cook will get his req num of jars
        }
        cout << (count + 1) << endl; // only 1  cook will get required number of jars
    }
    return 0;
}
