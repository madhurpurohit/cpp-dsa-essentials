#include <iostream>
#include <cstdlib>
#include <climits>
#define size 100
using namespace std;

void class_lecture()
{
    // int arr[5] = {10, 4, 3, 2, 8};
    int arr[7] = {8, 0, 1, -8, 5, 2, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Maximum element in array.
    for (int i = n - 1; i > 0; i--)
    {
        int largest = INT_MIN, index = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > largest)
            {
                largest = arr[j];
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }

    cout << "Array after sorting in increasing order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_sort(int sort[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << sort[i] << ", ";
    }
    cout << endl;
}

void selection_sort_increasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
    cout << "Array after sorting in increasing order using selection sort: ";
    print_sort(arr, n);
}

void selection_sort_decreasing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
                swap(arr[i], arr[j]);
        }
    }
    cout << "Array after sorting in decreasing order using selection sort: ";
    print_sort(arr, n);
}

int main()
{
    int sort[size];
    int range;
    cout << "Enter size of array: ";
    cin >> range;

    cout << "Enter element of array: ";
    for (int i = 0; i < range; i++)
    {
        cin >> sort[i];
    }
    selection_sort_increasing(sort, range);
    selection_sort_decreasing(sort, range);
    class_lecture();
}