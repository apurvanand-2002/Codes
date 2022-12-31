#include <iostream>
using namespace std;
void selection_sort(int *A, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int min_index = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (A[min_index] > A[j])
            {
                min_index = j;
            }
        }
        int temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
    }
}
int main()
{
    int A[] = {23, 45, 1, 21, 678, 90, 87};
    int size = sizeof(A) / sizeof(int);
    /*Selection sort considers the first element as minimum and then
    selects the minimum element out of all other elements present in the
    array, vector, list etc.*/
    selection_sort(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}