#include <iostream>
using namespace std;
// In bubble sort, we do swapping with neighbours if first is greater than the second.
// In every pass, the largest element is inserted at the last.
void Bubble_sort(int *A, int n)
{
    for (int i = 0; i < (n - 1); i++) // number of passes
    {
        int flag = 0;
        for (int j = 0; j < (n - 1 - i); j++) // number of swaps
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int A[] = {23, 45, 1, 2, 678, 90, 87};
    int size = sizeof(A) / sizeof(int);
    Bubble_sort(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}