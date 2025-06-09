//* Static Data member & static data function.
//* Const keyword details link:- https://chatgpt.com/share/670ab2fa-66b4-800f-9aa1-fe3fc3d866ab
//* Encapsulation:- Wrapping up of data & information in a single unit, while controlling access to them.It is also known as data hiding.
//* Abstraction:- Displaying only essential information & hiding the details.
#include <iostream>
#include <string>
using namespace std;

class Customer
{
    string name;
    int accountNumber, balance;
    static int totalCustomer;
    static int totalBalance;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    static void accessStatic()
    {
        cout << "Total user: " << totalCustomer << endl;
        cout << "Total amount: " << totalBalance << endl;
        cout << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            totalBalance += amount;
        }
        else
            cout << "Invalid deposit amount\n";
    }

    void withdraw(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            totalBalance -= amount;
        }
        else
            cout << "Invalid withdraws & insufficient funds.\n";
    }

    void display()
    {
        cout << "Customer name: " << name << endl;
        cout << "Customer account number: " << accountNumber << endl;
        cout << "Customer account balance: " << balance << endl;
        cout << "Total customer: " << totalCustomer << endl;
        cout << endl;
    }

    void displayTotalCustomer()
    {
        cout << "Total Customer: " << totalCustomer << endl;
        cout << endl;
    }
};

int Customer::totalCustomer = 0;
int Customer::totalBalance = 0;

int main()
{
    Customer user1("Madhur", 1234, 10000);
    user1.display();
    Customer user2("John", 7610, 14000);
    user2.display();

    // If Static data member is present in public, than we can access this like:-
    // Customer::totalCustomer = 5;
    // user2.displayTotalCustomer();

    // Access static data member using static member function.
    Customer::accessStatic();

    user1.deposit(5000);
    Customer::accessStatic();

    user2.withdraw(1500);
    Customer::accessStatic();

    return 0;
}