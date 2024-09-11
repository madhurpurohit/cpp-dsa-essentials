#include <iostream>
#include <cstdlib>
using namespace std;

//* Using variable pointer in function.
void variable(int *a)
{
    *a = *a + 1;
}

//* Using array pointer in function.
void funcArray(int *p) // void array(int p[])
{
    for (int i = 0; i < 5; i++)
        p[i] = 2 * p[i];
}

//* Can & And * is working same for functions.
void checkAddressOf(int &num1, int &num2)
{
    cout << "We are in the fuction which is called by reference\n"
         << endl;
    cout << "Address in function: " << &num1 << " " << &num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping in function: " << num1 << " " << num2 << endl;
}

void checkPointer(int *num1, int *num2)
{
    cout << "We are in the fuction which is called by pointer\n"
         << endl;
    cout << "Address in function: " << num1 << " " << num2 << endl;
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "After swapping in function: " << *num1 << " " << *num2 << endl;
}

int main()
{
    system("clear");

    //* Function call for variable
    int num = 5;
    cout << "num before function call: " << num << endl;
    variable(&num); //* Call by pointer.
    cout << "num after function call: " << num << endl;

    //* Function call for array.
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array before function call: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    funcArray(arr);
    cout << "Array after function call: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << endl;
    cout << "Check that & or * is working same for functions or not" << endl;
    //* Check that & or * is working same for functions or not.
    int num1 = 10, num2 = 20;
    cout << "Before swapping: " << num1 << " " << num2 << endl;
    cout << "Address in main: " << &num1 << " " << &num2 << endl;
    cout << endl;
    checkAddressOf(num1, num2); // Pass by reference.
    cout << "Numbers after swapping by reference: " << num1 << " " << num2 << endl;

    cout << endl;
    num1 = 10, num2 = 20;
    checkPointer(&num1, &num2); // Pass by pointer.
    cout << "Numbers after swapping by pointer:  " << num1 << " " << num2 << endl;
    cout << endl;

    //! Reference variable.
    int x = 10;
    int &y = x;
    y = 20;
    cout << "Value of x: " << x << " and value of y: " << y << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << &y << endl;

    return 0;
}