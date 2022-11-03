#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a = n;
        if (n % 2 == 0)
        {
            while (n > 0)
            {
                cout << n << " ";
                n = (n - 2);
            }
            n = (a - 1);
            while (n > 0)
            {
                cout << n << " ";
                n = (n - 2);
            }
            cout << endl;
        }
        else
        {
            int b = (n - 1);
            while (b > 0)
            {
                cout << b << " ";
                b = (b - 2);
            }
            b = a;
            while (b > 0)
            {
                cout << b << " ";
                b = (b - 2);
            }
            cout << endl;
        }
    }
    return 0;
}
