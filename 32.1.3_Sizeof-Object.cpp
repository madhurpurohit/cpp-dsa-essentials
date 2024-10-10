//* Size of object.
#include <iostream>
using namespace std;

class empty1
{
};

class a
{
    int num;
};

class b
{
    char letter;
    int num;
};

class c
{
    char letter;
    int num;
    char d;
};

class d
{
    int num;
    char letter;
    char e;
};

int main()
{
    system("clear");
    empty1 ob;
    a ob1;
    b ob2;
    c ob3;
    d ob4;
    cout << "Size of object when class is empty:" << sizeof(ob) << endl;
    cout << "Size of object when integer is present:" << sizeof(ob1) << endl;
    cout << "Size of object when int, char both is present:" << sizeof(ob2) << endl;
    cout << "Size of object when char, int, char is present:" << sizeof(ob3) << endl;
    cout << "Size of object when int, char, char is present:" << sizeof(ob4) << endl;

    return 0;
}