#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, -8, 9, 10, -2, 4, -20, 10};
    int size = sizeof(A) / sizeof(int);
    int current_sum = A[0];
    int max_sum = A[0];
    for (int i = 1; i < size; i++)
    {
        current_sum = (current_sum + A[i]);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        if (max_sum < current_sum)
        {
            max_sum = current_sum;
        }
    }
    cout << max_sum << endl;
}