#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 10;
    // char a = 'b';

    // Print the address of a.
    cout << "Address of a using & operator is: " << &a << endl;

    // todo Initialize pointer variable. Pointer always same type of data that is pointed. In this case it is int, because a is int.
    int *ptr = &a;

    // Print the address of ptr.
    cout << "Address of a using pointer is: " << ptr << endl;

    // Size of pointer.
    cout << "Size of pointer is: " << sizeof(ptr) << endl;

    // Print the value of a using pointer.
    cout << "Value of a using pointer is: " << *ptr << endl;

    // Make another variable.
    int b = 20;

    // Initialize same pointer variable to b. Now ptr is pointing to b.
    ptr = &b;

    // Print the address of ptr.
    cout << "Address of b using pointer is: " << ptr << endl;

    // Print the value of a using pointer.
    cout << "Value of b using pointer is: " << *ptr << endl;

    // Update value of b.
    b = 30;

    // Now print the value at ptr.
    cout << "Value of updated b using pointer is: " << *ptr << endl;

    return 0;
}