#include <iostream>
using namespace std;

void recursion(int n)
{
    //* Base case.
    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return;
    }

    cout << n << " days left for birthday" << endl;

    recursion(--n);
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    //* Iterative approach.
    for (int i = n; i > 0; i--)
    {
        cout << i << " days left for birthday" << endl;
    }
    cout << "Happy Birthday" << endl;

    //* Recursive approach.
    recursion(n);

    return 0;
}
