//* Arrange array in increasing order using Merge Sort.
#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    // Sort & merge the array into temp from start to end.
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // Left array is not empty yet or left pointer is not going outside of left array.
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // Right array is not empty yet or right pointer is not going outside of right array.
    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    // Copy the temp array into original array.
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}

void divideArray(int arr[], int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;

    // Left array partition.
    divideArray(arr, start, mid);

    // Right array partition.
    divideArray(arr, mid + 1, end);

    // Sort the array & copy it in original array.
    mergeSort(arr, start, mid, end);
}

int main()
{
    system("clear");
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};

    divideArray(arr, 0, 9);

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}