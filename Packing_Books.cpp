#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z, b;
        cin >> x >> y >> z;
        int a = (y / z);
        if (y % z != 0)
        {
            a = a + 1;
        }
        int ans = (a * x);
        cout << ans << endl;
    }
    return 0;
}
