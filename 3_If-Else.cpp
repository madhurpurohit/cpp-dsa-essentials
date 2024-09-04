#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of week(1-7): ";
    cin >> number;

    if (number == 1)
        cout << "Monday";
    else if (number == 2)
        cout << "Tuesday";
    else if (number == 3)
        cout << "Wednesday";
    else if (number == 4)
        cout << "Thursday";
    else if (number == 5)
        cout << "Friday";
    else if (number == 6)
        cout << "Saturday";
    else if (number == 7)
        cout << "Sunday";
    else
        cout << "Enter a valid number.";
}