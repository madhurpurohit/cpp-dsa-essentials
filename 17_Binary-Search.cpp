#include <iostream>
using namespace std;

void InputElement(int arr[], int n)
{
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        // Find mid.
        int mid = (start + end) / 2;

        // search element in array.
        if (arr[mid] == key)
            return mid;

        // element is greater than arr[mid].
        else if (arr[mid] < key)
            start = mid + 1;

        // element is less than arr[mid].
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    InputElement(arr, n);

    // Print the array.
    //  cout<<"The array is: ";
    //  PrintArray(arr, n);

    // Intitializing searching element.
    int key;
    cout << "Enter the searching element: ";
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;
}