#include <iostream>
using namespace std;

// Here we use pass by value.
bool Isprime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Factorial(int n = 3) // Default parameter.
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    // Default parameter.
    cout << Factorial() << endl;
    // Given parameter.
    cout << Isprime(a) << endl;
    cout << Factorial(a) << endl;
    cout << Isprime(b) << endl;
    cout << Factorial(b) << endl;
    cout << Isprime(b - a) << endl;
    cout << Factorial(b - a) << endl;
}