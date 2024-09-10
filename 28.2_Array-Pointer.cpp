#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    //* Print the address of first element
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << arr + 0 << endl;
    cout << ptr << endl;

    //* Print the address of second element
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;
    cout << ptr + 1 << endl;

    //* Print the value of 0 index.
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;

    //* Print all the address.
    for (int i = 0; i < 5; i++)
        cout << arr + i << endl;

    //* Print all the value.
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << endl;

    //* Print all the value using pointer.
    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << endl; // Or we can use ptr[i].

    //* Print all the address using pointer.
    for (int i = 0; i < 5; i++)
        cout << ptr + i << endl;

    // todo Arithmetic Operation on pointer, i.e. ptr++, ptr--.

    //* Print all the value using ++ pointer arithmetic.
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    //* Print all the value using -- pointer arithmetic.
    ptr = &arr[4];
    for (int i = 4; i >= 0; i--)
    {
        cout << *ptr << endl;
        ptr--;
    }

    //* If we want to point 4th element or 3rd index.
    ptr = arr;
    ptr = ptr + 3;
    cout << *ptr << endl;

    //* Because ptr is pointing 4th element or 3rd index.
    ptr = ptr - 2;
    cout << *ptr << endl;

    return 0;
}