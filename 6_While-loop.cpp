#include <iostream>
using namespace std;

int main()
{
    int number, i = 1;
    cout << "Enter any number: ";
    cin >> number;

    cout << "The Table of " << number << " is:" << endl;
    while (i <= 10)
    {
        cout << number << " * " << i << " = " << number * i << endl;
        i++;
    }

    cout << "The factor of " << number << ":" << endl;
    int n = 1;
    while (n <= number / 2)
    {
        if (number % n == 0)
        {
            cout << n << " ";
        }
        n++;
    }
    cout << number;
}