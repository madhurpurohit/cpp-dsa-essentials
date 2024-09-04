#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int i = 1, sum = 0;
    do
    {
        i++;
        sum = sum + i;
    } while (i <= number);
    cout << "If we write update statement above our code part than the answer is: " << sum << endl;

    int n = 1, sum1 = 0;
    do
    {
        sum1 = sum1 + n;
        n++;
    } while (n <= number);
    cout << "If we write update statement below our code part than the answer is: " << sum1 << endl;
}