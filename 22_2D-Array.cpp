// Create 2D-Array & Search element with linear search in array.
#include <iostream>
using namespace std;

void PrintCol(int arr[][4], int row, int col)
{
    cout << "Col wise element in array: ";
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int LinearSearch(int arr[][4], int x, int y, int z)
{
    for (int row = 0; row < y; row++)
    {
        for (int col = 0; col < z; col++)
        {
            if (arr[row][col] == x)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    // return 0;
}

int main()
{
    // Create & initialize array.
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << endl;

    // Print the array.
    cout << "Row wise element in array: ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
    }
    cout << endl;

    int x;
    cout << "Enter the search element: ";
    cin >> x;

    // Print all the element in array col wise, function call.
    // PrintCol(arr, 3, 4);

    // Search the element.
    LinearSearch(arr, x, 3, 4);
}
