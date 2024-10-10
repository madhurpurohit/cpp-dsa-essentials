//* Dynamically allocate object.
#include <iostream>
#include <string>
using namespace std;

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
    //* Dynamically create objects.
    Student *S = new Student;

    //* Accessing dynamic objects.
    (*S).name = "Madhur"; // S->name="Madhur";
    (*S).age = 23;
    (*S).rollNumber = "0850CS211067";
    (*S).grade = "A+";

    //* Printing dynamic objects.
    cout << "Student name: " << (*S).name << endl;
    cout << "Student age: " << (*S).age << endl;
    cout << "Student roll number: " << S->rollNumber << endl;
    cout << "Student grade: " << S->grade << endl;

    return 0;
}