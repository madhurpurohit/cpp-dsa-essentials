//* Arrange array in increasing order using Merge Sort.
#include <iostream>
#include <vector>
using namespace std;

int partitionArray(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int pivot = partitionArray(arr, start, end);

    // Left side portion of array.
    quickSort(arr, start, pivot - 1);

    // Right side portion of array.
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};

    cout << "Array before quick sort is:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, 9);

    cout << "Array after quick sort is:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}