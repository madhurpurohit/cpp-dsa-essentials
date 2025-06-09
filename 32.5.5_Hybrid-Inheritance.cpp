//* Hybrid Inheritance.
//* Visualization link:- https://excalidraw.com/#json=GIDd-MO1K1ku6VpI2dMmO,l5tRK3V0mBx1m_DPu7gAVg
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "In Student Class\n";
    }

    void print()
    {
        cout << "I am student\n";
    }
};

class Male
{
public:
    Male()
    {
        cout << "In Male Class\n";
    }

    void maleDetails()
    {
        cout << "I am male.\n";
    }
};

class Female
{
public:
    Female()
    {
        cout << "In Female Class\n";
    }

    void femaleDetails()
    {
        cout << "I am female.\n";
    }
};

class Boy : public Student, public Male
{
public:
    Boy()
    {
        cout << "In Boy Class\n";
    }

    void boyDetails()
    {
        cout << "I am boy.\n";
    }
};

class Girl : public Student, public Female
{
public:
    Girl()
    {
        cout << "In Girl Class.\n";
    }

    void girlDetails()
    {
        cout << "I am girl.\n";
    }
};

int main()
{
    Girl G1;
    Boy B1;

    cout << endl;
    //* Function that we can call with Girl Object.
    G1.girlDetails();
    G1.femaleDetails();
    G1.print();

    cout << endl;
    //* Function that we can call with Girl Object.
    B1.boyDetails();
    B1.maleDetails();
    B1.print();

    //* Function that we cannot call.
    /* G1.boyDetails();
       G1.maleDetails();
       B1.girlDetails();
       B1.femaleDetails();
    */

    return 0;
}