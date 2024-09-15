//* Multiple pointer can be defined as [datatype n pointername1= &(n-1)pointername2], where n is the number of pointer.

#include <iostream>
using namespace std;

void refVariable(int *&ref)
{
    ref = ref + 1;
}
int main()
{
    system("clear");
    int n = 10;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;

    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;

    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;

    *ptr2 = *ptr2 + 1;
    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;
    cout << endl;

    // todo Change the value of ptr1 with using reference variable.
    ptr1 = &n;
    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;
    cout << endl;
    refVariable(ptr1);
    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;

    return 0;
}