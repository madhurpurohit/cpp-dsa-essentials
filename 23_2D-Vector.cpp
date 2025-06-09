#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Create 2D Vector.
    // vector<vector<int>> matrix; //We can create 2D vector like this.
    vector<vector<int>> matrix(n, vector<int>(m, 1));

    cout << "Enter element in " << n << " x " << m << " array:\n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> matrix[row][col];
        }
    }

    cout << "The 2D Vector Array is:\n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // cout << "Rows = " << matrix.size() << endl;
    // cout << "Cols = " << matrix[0].size() << endl;
}
