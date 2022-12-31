#include <iostream>
using namespace std;
void insertion_sort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = A[i];
        int j = (i - 1);
        for (; j >= 0; j--)
        {
            if (A[j] > temp)
            {
                A[j + 1] = A[j];
            }
            else
            {
                break;
            }
        }
        A[j + 1] = temp;
    }
}
int main()
{
    int A[] = {23, 45, 1, 21, 678, 90, 87};
    int size = sizeof(A) / sizeof(int);
    insertion_sort(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}