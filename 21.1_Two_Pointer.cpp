/* Segregate 0 & 1. Here array is [1,0,1,0,1,0].
output:- [0,0,0,1,1,1]
Intuition:- M-1:- We can sort the array with insertion, bubble or selection sort but TC O(n^2).
M-2:- We can sort this by sort(arr.begin(), arr.end()), but TC O(NlogN).
M-3:- we can count the 0 and 1 and the update the array. This method takes TC O(N). This method is explained below.
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
void Two_pointer();

int main()
{
    system("clear");
    // int arr[] = {1, 0, 1, 0, 1, 0};
    int arr[] = {1, 0, 0, 1, 0, 1, 1};

    int count0 = 0, count1 = 0;

    // Calculate the count of 0 & 1.
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
            count0++;
        else
            count1++;
    }

    // Update the array for 0's.
    for (int i = 0; i < count0; i++)
        arr[i] = 0;

    // Update the array for 1's.
    for (int i = count0; i < 7; i++)
        arr[i] = 1;

    // Print the array after segregation.
    cout << "Array after segregation: ";
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;
    Two_pointer();
}

// But we can do this in single scan. & the TC O(N) remains same.
void Two_pointer()
{
    // int arr[] = {1, 0, 1, 0, 1, 0};
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int start = 0, end = 6;

    // Segregate the array with two pointer approach.
    while (start < end)
    {
        if (arr[start] == 0)
            start++;

        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
                end--;
        }
    }

    // Print the array.
    cout << "Array after segregation with two pointer approach: ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
