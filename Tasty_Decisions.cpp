#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int ch, ca;
        cin >> ch >> ca;
        if (ch * 2 > ca * 5)
        {
            cout << "Chocolate" << endl;
        }
        else if (ca * 5 > ch * 2)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }
}