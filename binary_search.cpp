#include <iostream>
using namespace std;
int binary_search(int A[], int size, int key)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = ((low + high) / 2);
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (-1);
}
int main()
{
    int A[] = {1, 2, 4, 567, 890, 987};
    int size = sizeof(A) / sizeof(int);
    int key = 987;
    cout << key << " is found at index-" << binary_search(A, size, key) << "." << endl;
}