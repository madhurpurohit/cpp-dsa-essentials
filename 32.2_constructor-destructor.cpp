#include <iostream>
#include <string>
using namespace std;

class customer
{
    string name;
    int age;
    int *age1;

public:
    // Default Constructor.
    // customer()
    // {
    //     cout << "Constructor is called\n"; // For checking default constructor.
    // }

    // Initialize value to data attribute using default constructor.
    customer()
    {
        name = "Mandy";
        // age = 21;

        age1 = new int;
        *age1 = 15;

        cout << "Customer Name: " << name << endl;
        cout << "Customer Age: " << *age1 << endl;
        cout << endl;
    }

    // Initialize value to data attributes using Parameterized Constructor.
    // customer(string a, int b)
    // {
    //     name = a;
    //     age = b;
    // }

    //! It will not initialize the value to data attribute instead it makes a new variable & than initialize value to it.Because firstly it finds into current block or scope.
    // customer(string name, int age)
    // {
    //     name = name;
    //     age = age;
    // }

    // todo For above problem we use this pointer. this pointer is automatically points to the object from which it is called.
    // customer(string name, int age)
    // {
    //     this->name = name;
    //     (*this).age = age;
    // }

    // Inline Constructor, we can not declare the same constructor with same parameter, otherwise it will through an error.
    inline customer(string a, int b) : name(a), age(b) {
                                       };

    // Copy Constructor. In this we will use referencing.
    customer(customer &B)
    {
        name = B.name;
        age = B.age;
    }

    void display()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Customer Age: " << age << endl;
        cout << endl;
    }

    // Default destructor.
    ~customer()
    {
        // delete age1;
        cout << "Destructor is called for: " << name << endl;
    }
};
//* In this we create two constructor they both have different parameter, which is known as constructor overloading.

int main()
{
    // system("clear");
    // Create Object for default constructor.
    customer user; // Create Object for Class without initialization.

    // customer user1, user2, user3; // They both called default constructor & have same values.

    // Create Object for Parameterized Constructor.
    customer user1("Madhur", 23);
    customer user2("Sam", 20);
    customer user3("Sammy", 25);

    // Copy one object value into another object.
    customer user4(user3);

    // Assign value with the help of assignment operator.
    // customer user5;
    customer user5 = user2;

    user1.display();
    user2.display();
    user3.display();
    user4.display();
    user5.display();

    // Create dynamic object.
    customer *user6 = new customer;

    // Delete dynamic object that is presented in main function.
    delete user6;

    return 0;
}