//* Single Inheritance.
//* When default constructor call than firstly it call human class constructor than it will call student class constructor, & destructor is opposite in nature.
//* Visualization link:- https://excalidraw.com/#json=RtBsEGa_VWRQaETFlf2UT,ZozKzD6gYd_LMsg6__KWsw
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

    void work()
    {
        cout << "I am working\n";
    }

    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
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

    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Student roll number: " << rollNumber << endl;
        cout << "Student fees: " << fees << endl;
    }
};

int main()
{
    system("clear");
    Student A1("Madhur", 24, 7610, 3000);
    A1.work();

    //* When we call a function than it will firstly find into its class, if there is no function with this name than it will go to parent class to find that particular function.
    A1.display();

    return 0;
}