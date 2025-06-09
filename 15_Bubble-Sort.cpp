#include <iostream>
using namespace std;

void BubbleSortBestCase(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == 0)
            break;
    }
}

void BubbleSortWorstCase(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--) // for(int i=n-2; i>0; i--)
    {
        for (int j = 0; j < i; j++) // for(int j=0; j<=i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    PrintArray(arr, n);
    cout << endl;

    cout << "Array after sorting: ";
    // BubbleSortBestCase(arr, n); //If we want to best case time complexity.
    BubbleSortWorstCase(arr, n); // If we want to worst case time complexity.
    PrintArray(arr, n);
}