/* Problem:- Largest sum contiguous subarray.
Solution:- 1. Same as Day39_Q1.cpp with some small changes but the TC is O(N^3).
           2. This solution with the TC is O(N^2).
           3. Another Better solution with the TC O(N) is Kadane's Algorithm.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
using namespace std;

int Maximum(vector<int> arr)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int prefix = 0;
        for (int j = i; j < arr.size(); j++)
        {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the element in array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Largest sum of contiguous" << Maximum(v);
}