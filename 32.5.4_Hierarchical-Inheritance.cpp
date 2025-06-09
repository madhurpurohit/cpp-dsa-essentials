//* Hierarchical Inheritance.
//* Visualization link:- https://excalidraw.com/#json=V1gStYKpCgHydfCQ-T-Ci,4IvZHU9XtLKsnGOQXDae8Q
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Human
{
    int rollNumber, fees;

public:
    // Calling Human class constructor for value initialization.
    Student(string name, int age, int rollNumber, int fees) : Human(name, age)
    {
        this->rollNumber = rollNumber;
        this->fees = fees;
    }

    void studentDetails()
    {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Student roll number: " << rollNumber << endl;
        cout << "Student fees: " << fees << endl;
    }
};

class Teacher : public Human
{
    string subject;
    int experience;

public:
    Teacher(string name, int age, string subject, int experience) : Human(name, age)
    {
        this->subject = subject;
        this->experience = experience;
    }

    void teacherDetails()
    {
        cout << "Teacher name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << endl;
    }
};

class Staff : public Human
{
    string work;

public:
    Staff(string name, int age, string work) : Human(name, age)
    {
        this->work = work;
    }

    void staffDetails()
    {
        cout << "Staff member name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Work: " << work << endl;
    }
};

int main()
{
    Student S1("Madhur", 23, 7610, 30000);
    Teacher T1("Rohit", 27, "DSA", 3);
    Staff A1("Ravi", 35, "Peon");

    S1.studentDetails();
    cout << endl;

    T1.teacherDetails();
    cout << endl;

    A1.staffDetails();
    cout << endl;

    return 0;
}