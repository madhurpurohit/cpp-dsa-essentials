#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
     system("clear");
     cout << "Binary Operator:" << endl;
     cout << 2 + 5 << endl;
     cout << 5.2 - 2 << endl;
     cout << 5 / 2 << endl;
     cout << 5.5 / 2 << endl;
     cout << 4 * 13 << endl;
     cout << 13.2 * 4 << endl;

     cout << "Unary Operator:" << endl;
     int a = 10;
     cout << a++ << endl; // First work and increment.
     cout << ++a << endl; // First increment and work.
     cout << a-- << endl; // First work and decrement.
     cout << --a << endl; // First decrement and work.

     cout << "Pre & Post:" << endl;
     int b = a++;
     cout << b << endl
          << a << endl;
     b = ++a;
     cout << b << endl
          << a << endl;
}