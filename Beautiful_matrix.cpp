#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5][5];
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int nswaps = abs((3 - (row + 1))) + abs((3 - (col + 1)));
    cout << nswaps << endl;
}