#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
using namespace std;

void twoDArray()
{
    // Seed the random number generator with the current time
    srand(time(0));

    int n, m;
    cout << "Enter rows & columns: ";
    cin >> n >> m;

    //* Create an Array, which stores the addresses.
    int **ptr = new int *[n];

    //* Store the address in the array.
    for (int i = 0; i < n; i++)
        ptr[i] = new int[m];

    //* Take value in array.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //? To get a random number within a specific range, you can use the modulus operator (%).
            int random = rand() % 100; // Random number between 0 and 99
            ptr[i][j] = random;
        }
    }

    cout << "Elements in 2D Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ptr[i][j] << " ";
        cout << endl;
    }

    //* Release memory from heap.
    for (int i = 0; i < n; i++)
        delete[] ptr[i]; // This will delete the memory allocated for each row.

    delete[] ptr; // This will delete the memory allocated to ptr means the 2D array.
}

void threeDArray()
{
    // Seed the random number generator with the current time
    srand(time(0));

    //* Create 3D array.
    int length, breadth, height;
    cout << "Enter length, breadth & height: ";
    cin >> length >> breadth >> height;

    int ***ptr = new int **[length];

    for (int i = 0; i < length; i++)
    {
        ptr[i] = new int *[breadth];

        for (int j = 0; j < breadth; j++)
            ptr[i][j] = new int[height];
    }

    //* Take value in array.
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            for (int k = 0; k < height; k++)
            {
                //? To get a random number within a specific range, you can use the modulus operator (%).
                int random = rand() % 100; // Random number between 0 and 99
                ptr[i][j][k] = random;
            }
        }
    }

    //* Print 3D array.
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            for (int k = 0; k < height; k++)
                cout << ptr[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }

    //* Deallocate the 3D array (reverse the allocation order)
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            delete[] ptr[i][j]; // Deallocate 1D arrays
        }
        delete[] ptr[i]; // Deallocate 2D arrays
    }
    delete[] ptr; // Deallocate the 3D array itself
}

int main()
{
    twoDArray();
    threeDArray();

    return 0;
}