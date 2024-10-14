//* MultiLevel Inheritance.
//* Visualization link:- https://excalidraw.com/#json=GM80WN-20WTJpkT9CY-F9,xGmSWSJrXojo0OD1GWyCVw
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void introduce()
    {
        cout << "Hello sir, my name is " << name << endl;
        cout << "My age is " << age << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthly_Salary()
    {
        cout << "My monthly salary is " << salary << endl;
    }
};

class Manager : public Employee
{
    string department;
    int noOfEmployee;

public:
    Manager(string name, int age, int salary, string department, int noOfEmployee)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->department = department;
        this->noOfEmployee = noOfEmployee;
    }

    void details()
    {
        cout << "I am leading the " << department << " department\n";
        cout << "Currently, I manage " << noOfEmployee << " employees.\n";
    }
};

int main()
{
    system("clear");
    Manager M1("Madhur", 27, 450000, "App", 20);

    //* Call he function of object.
    M1.introduce();
    M1.monthly_Salary();
    M1.details();

    return 0;
}