//* Classes & Objects in OOPS.
#include <iostream>
#include <string>
using namespace std;

//* Create a class with name student. Classes is like data-type, which the user can defined, that's why they also known as user defined data-type.
class Student
{
public:
    string name;
    int age;
    string rollNumber, grade;
};

int main()
{
    system("clear");
    // Initialized or Declare class with object. Object is like variable of data-type.
    Student S1;

    // For put any value in class or get the value. Use object.variable_name, here variable name means which is defined inside class. (i.e. name, age, rollNumber, grade).
    S1.name = "Sohan";
    S1.age = 23;
    S1.rollNumber = "0850CS211067";
    S1.grade = "A+";

    cout << "Student name: " << S1.name << endl;
    cout << "Student age: " << S1.age << endl;
    cout << "Student roll number: " << S1.rollNumber << endl;
    cout << "Student grade: " << S1.grade << endl;
    cout << endl;

    //* Another object with same class.
    Student s2;
    s2.name = "Sam";
    s2.age = 21;
    s2.rollNumber = "0850CS211076";
    s2.grade = "B";

    cout << "Student name: " << s2.name << endl;
    cout << "Student age: " << s2.age << endl;
    cout << "Student roll number: " << s2.rollNumber << endl;
    cout << "Student grade: " << s2.grade << endl;

    return 0;
}

//? This is the normal method. Here we make new variable for each & every student.
// int main()
// {
//     string name;
//     int age, rollNumber;
//     string grade;

//     cin >> name >> age >> rollNumber >> grade;
//     cout << "Student name: " << name << endl;
//     cout << "Student age: " << age << endl;
//     cout << "Student roll number: " << rollNumber << endl;
//     cout << "Student grade: " << grade << endl;
// }