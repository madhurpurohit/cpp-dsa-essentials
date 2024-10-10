//* Setter Function:- If we want to set our data private, but also we want to store value in it. So we define a function inside class with public: access modifier, so that we can change the value of data. Because private: access modifier means we can't access data outside of this class. This method is also known as Setter function.

//* Getter function:- If we know the value of variable which is stored in private: access modifiers, than we use Getter function.
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;
    string rollNumber, grade;

public:
    //* Setter function for name variable.
    void setName(string n)
    {
        //* If someone enter empty string or anything which is not consider according to our terms, than we can use here conditional statements.
        // if (n.empty())
        if (n.size() == 0)
        {
            cout << "Invalid name, Please enter a valid name.\n";
            return;
        }

        //* It means in name variable store the value of n.
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setRollNumber(string r)
    {
        rollNumber = r;
    }

    void setGrade(string g)
    {
        grade = g;
    }

    //* Getter function to get value of variable.
    void getName()
    {
        cout << "Student name:" << name << endl;
    }
    void getAge()
    {
        cout << "Student age:" << age << endl;
    }
    string getRollNumber()
    {
        return rollNumber;
    }
    string getGrade(int password)
    {
        if (password == 123)
        {
            return grade;
        }

        return "";
    }
};

int main()
{
    system("clear");
    Student s1;

    //* Set the value using setter function.
    // s1.setName("Madhur");
    s1.setName("");
    s1.setAge(23);
    s1.setRollNumber("0850CS211067");
    s1.setGrade("A+");

    //* Get the value using getter function.
    s1.getName();
    s1.getAge();
    cout << "Student roll number:" << s1.getRollNumber() << endl;
    cout << "Student grade: " << s1.getGrade(123) << endl;
    cout << "Student grade: " << s1.getGrade(1234) << endl;

    return 0;
}