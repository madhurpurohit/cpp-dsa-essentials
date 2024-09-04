#include <iostream>
using namespace std;

int Sum(int n, int m)
{
    return n + m;
}

int Mul(int m, int n)
{
    return m * n;
}

void func()
{
    cout<<"Hello Madhur\n";
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    int ans = Sum(a, b);
    cout << ans << endl;
    cout << Mul(a, b) << endl;
    func();
}