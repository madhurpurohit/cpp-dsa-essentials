#include <iostream>
using namespace std;

int main()
{
    //* How to store a variable in Heap memory.
    int *ptr = new int;

    cout << "Address of variable in heap: " << ptr << endl;

    //* To update or redefine the value of variable.
    *ptr = 10;
    cout << "Value of variable in heap: " << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 2.254;
    cout << "Address of variable in heap: " << ptr2 << endl;
    cout << "Value of variable in heap: " << *ptr2 << endl;

    //* For Array.
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = i * 2;

    cout << "Element in array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    //* How to delete a variable in heap memory.
    delete ptr;
    delete ptr2;
    delete[] arr;

    return 0;
}