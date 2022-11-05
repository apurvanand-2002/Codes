#include <iostream>
using namespace std;
int main()
{
    int iyear;
    cin >> iyear;
    int ans;
    while (true)
    {
        iyear++;
        int t = iyear;
        int a = iyear % 10;
        iyear = (iyear / 10);
        int b = iyear % 10;
        iyear = (iyear / 10);
        int c = iyear % 10;
        iyear = (iyear / 10);
        int d = iyear % 10;
        iyear = (iyear / 10);
        if (a != b && b != c && c != d && d != a && d != b && a != c)
        {
            ans = t;
            break;
        }
        iyear = t;
    }
    cout << ans << endl;
}