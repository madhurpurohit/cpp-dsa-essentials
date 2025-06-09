#include <iostream>
using namespace std;

// Here we use pass by reference.
void Swap(int &x, int &y) // Here we can also write like this void Swap(int &a, int &b){//code here.}.
{
    int z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Swap(a, b);
    cout << a << " " << b << endl;
}