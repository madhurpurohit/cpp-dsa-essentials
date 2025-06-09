#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] < arr[j - 1])
    //             swap(arr[j], arr[j - 1]);
    //         else
    //             break;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Input array element.
    cout << "Enter element in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Print Array.
    cout << "Array before sorting: ";
    PrintArray(arr, n);
    cout << endl;

    // Sorting.
    cout << "Array after sorting: ";
    InsertionSort(arr, n);
    PrintArray(arr, n);
}