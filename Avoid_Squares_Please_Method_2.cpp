#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    // product of any two consecutive numbers is not a perfect square.
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
