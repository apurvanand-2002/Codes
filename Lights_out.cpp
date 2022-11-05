#include <iostream>
using namespace std;
int main()
{
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
            if (A[i][j] % 2 == 0)
            {
                A[i][j] = 0;
            }
            else
            {
                A[i][j] = 1;
            }
        }
    }
    int B[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 1)
            {
                if (B[i][j] == 0)
                {
                    B[i][j] = 1;
                }
                else
                {
                    B[i][j] = 0;
                }
                if ((i + 1) >= 0 && (i + 1) < 3 && (j) >= 0 && (j) < 3)
                {
                    if (B[i + 1][j] == 0)
                    {
                        B[i + 1][j] = 1;
                    }
                    else
                    {
                        B[i + 1][j] = 0;
                    }
                }
                if ((i) >= 0 && (i) < 3 && (j + 1) >= 0 && (j + 1) < 3)
                {
                    if (B[i][j + 1] == 0)
                    {
                        B[i][j + 1] = 1;
                    }
                    else
                    {
                        B[i][j + 1] = 0;
                    }
                }
                if ((i - 1) >= 0 && (i - 1) < 3 && (j) >= 0 && (j) < 3)
                {
                    if (B[i - 1][j] == 0)
                    {
                        B[i - 1][j] = 1;
                    }
                    else
                    {
                        B[i - 1][j] = 0;
                    }
                }
                if ((i) >= 0 && (i) < 3 && (j - 1) >= 0 && (j - 1) < 3)
                {
                    if (B[i][j - 1] == 0)
                    {
                        B[i][j - 1] = 1;
                    }
                    else
                    {
                        B[i][j - 1] = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << "";
        }
        cout << endl;
    }
}