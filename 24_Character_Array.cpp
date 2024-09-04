#include <iostream>
using namespace std;

int main()
{
    // // Create & Initialize character array.
    // char arr[] = {'a', 'p', 'p', 'l', 'e'};
    // for (int i = 0; i < 5; i++)
    //     cout << arr[i];

    // // Create & Declare character array without NULL character.
    // char arr[20];
    // for (int i = 0; i < 20; i++)
    //     cin >> arr[i];

    // for (int i = 0; i < 20; i++)
    //     cout << arr[i];

    // Create & declare character array with NULL character.
    char arr[10];
    //! If we give input:- Madhur1234 & print this, then it will show an error because there is no space available to store a NULL character at the last of this array.
    cin >> arr;
    //** If we give an space after Ma, then it will consider as a NULL character. & arr[2]='\0', then it will print Ma.
    cout << arr;
}