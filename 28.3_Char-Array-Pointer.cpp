// todo (void*) is a void pointer, which type cast any data type variable to point the address of it's own, but it doesn't store the information about data type of variable.
// todo When we make a character type variable or array, & initialize it to a char type pointer & if we print this pointer, it will print the whole array until it doesn't get a null terminator('\0'). It is a default behaviour of char pointer or &char-variable.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //! Character Array.
    char arr[5] = {'1', '2', '3', '4', '5'};
    char *ptr = arr;

    //* It will print the whole array, because it's default behaviour of arr & ptr.
    cout << arr << endl;
    cout << ptr << endl;

    //* For printing the address of arr & ptr use (void*)array-name.
    cout << (void *)arr << endl;
    cout << (void *)ptr << endl;

    // todo Always use static_cast<void*> instead of (void*) because it provides better type safety, readability & clarity.
    cout << static_cast<void *>(ptr) << endl;
    cout << static_cast<void *>(arr) << endl;

    //! Character Variable.
    char name = 'A';
    char *cptr = &name;

    //* It will print the name variable and some other data in contiguous manner until it doesn't get a null terminator('\0').
    cout << cptr << endl;
    cout << &name << endl;

    //* Print the address of name variable. Here also for printing address of name variable we can use "(void*)" after that pointer name.
    cout << (void *)cptr << endl;
    cout << (void *)&name << endl;

    return 0;
}