// Answer = reminder*2^i+answer;
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    int number, reminder, ans = 0, multiply = 1;
    cout << "Enter any number: ";
    cin >> number;

    int temp = number;
    while (number > 0)
    {
        // Reminder with Modulus Operator.
        reminder = number % 2;

        // Reminder with Bitwise Operator.
        reminder = number & 1;

        // Quotient with Divide Operator.
        number /= 2;

        // Quotient with Right Shift operator.
        number = number >> 1;

        // Answer.
        ans += reminder * multiply;

        // Update multiply.
        multiply *= 10;
    }
    cout << "Binary form of " << temp << " is: " << ans << endl;
}