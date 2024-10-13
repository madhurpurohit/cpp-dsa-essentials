//* Inheritance:- The capability of a class to derive property & characteristic from another class.
//* Visualization link:- https://excalidraw.com/#json=ER0WN1e44Nawea87BX8di,o4yvL6C_DciRuEuvd40MYA
//* Private > Protected > Public.
#include <iostream>
#include <string>
using namespace std;

//* If the human class attributes present in private: than we cannot access them. If we use public than we can easily get access for derived class & externally. But if we use protected than we can only access through derived class.
class Human
{
protected: // public:, private:
    string name;
    int age, weight;
};

class Student : public Human // We can also use private & protected inplace of public.
{
    int fees, rollNumber;

public:
    Student(string name, int age, int weight, int fees, int rollNumber)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->fees = fees;
        this->rollNumber = rollNumber;
    }

    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Student weight: " << weight << endl;
        cout << "Student fees: " << fees << endl;
        cout << "Student roll number: " << rollNumber << endl;
    }
};

int main()
{
    system("clear");
    Student S1("Madhur", 23, 68, 30000, 850211067);
    S1.display();
    cout << endl;

    //* If human class attribute is in public: than we can access it, But when our derived class also comes under public: otherwise we cannot access it.
    // S1.name = "Sam";
    // S1.fees = 10;
    S1.display();

    return 0;
}