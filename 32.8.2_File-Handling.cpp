#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ofstream fout;
    fout.open("zoom.txt");
    fout << "Original Vector\n";
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";

    fout << "\nSorted data\n";

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";

    fout.close();

    return 0;
}