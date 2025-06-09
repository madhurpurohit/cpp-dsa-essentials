//* Print array using recursion.
#include <iostream>
using namespace std;

//? From index 0 to index last.
void printArray0(int arr[], int index, int size)
{
    if (index == size)
        return;

    cout << arr[index] << " ";
    printArray0(arr, index + 1, size);
}

//? From last index to 0 index.
void reverseArray(int arr[], int index)
{
    if (index < 0)
        return;
    cout << arr[index] << " ";
    reverseArray(arr, index - 1);
}

//? Reverse with index 0.
void reverseArray0(int arr[], int index, int size)
{
    if (index == size)
        return;

    reverseArray0(arr, index + 1, size);
    cout << arr[index] << " ";
}

//? Array from index 5 to 0 but print in forward manner.
void printArray(int arr[], int index)
{
    if (index < 0)
        return;

    printArray(arr, index - 1);
    cout << arr[index] << " ";
}

int main()
{
    int arr[5] = {10, 11, 12, 13, 14};

    cout << "Array from index 0 to last index is: \n";
    printArray0(arr, 0, 5);
    cout << endl;

    cout << "Array from last index to 0 is: \n";
    printArray(arr, 4);
    cout << endl;

    cout << "Reversed Array from last index to 0 is: \n";
    reverseArray(arr, 4);
    cout << endl;

    cout << "Reversed Array from index 0 to last index is: \n";
    reverseArray0(arr, 0, 5);
    cout << endl;

    return 0;
}