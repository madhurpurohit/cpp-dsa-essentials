#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(235);
    arr.push_back(15);
    arr.push_back(54);
    arr.push_back(135);

    cout << endl;

    // Print the value of vector.
    cout << "Element of vector : ";
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    // Sorting vector in ascending order.
    sort(arr.begin(), arr.end());

    // Print vector.
    cout << "Element of vector after sorting in ascending order: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    // // Sorting vector in decending order.
    // sort(arr.begin(), arr.end(), greater<int>());

    // // Print vector.
    // cout << "Element of vector after sorting in desending order: ";
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << endl;

    // // Sorting vector in decending order.
    // sort(arr.rbegin(), arr.rend()); // It will sort the vector in increasing order from right to left because rbegin() points to right and rend points to left.

    // // Print vector.
    // cout << "Element of vector after sorting in desending order: ";
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << endl;

    // Search in binary search.
    cout << "Is 54 present in arr: " << binary_search(arr.begin(), arr.end(), 54) << endl;
    cout << "Is 55 present in arr: " << binary_search(arr.begin(), arr.end(), 55) << endl;

    // Find the index of an element.
    cout << "The index of 54 is: " << find(arr.begin(), arr.end(), 54) - arr.begin() << endl;
}