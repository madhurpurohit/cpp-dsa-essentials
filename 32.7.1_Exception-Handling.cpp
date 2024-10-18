//*- For exception handling we can use 2 methods.
//* 1. If-else Or if-else if ladder method.
//* 2. Try & catch , throw method.

// todo try:- It will simply check that in each line of code that is presented inside try block, is suffer with any type of exception is yes than command goes to throw keyword, & this throw message is need a handler that handles it, so the command goes to catch keyword.
// todo catch:- For handler we use catch keyword just after the try block is end.
// todo throw:- If exception exist than show this string literal as an output or anything else that we want to show as an output.

/* The try keyword represents a block of code that may throw an exception placed inside the try block. It's followed by one or more catch block. If an exception occurs, try block throws that exception.

The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the execution is written inside the catch block.

An execution in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the throw execution.
*/
#include <iostream>
#include <string>
using namespace std;

// class exception
// {
// protected:
//     string msg;

// public:
//     exception(string msg)
//     {
//         this->msg = msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };

// class runtime_error : public exception
// {
// public:
//     runtime_error(const string &msg) : exception(msg);
// };

class InsufficientBalanceError : public runtime_error
{
public:
    InsufficientBalanceError(const string &msg) : runtime_error(msg) {};
};

class InvalidAmountError : public runtime_error
{
public:
    InvalidAmountError(const string &msg) : runtime_error(msg) {};
};

class Customer
{
    string name;
    int balance, accountNumber;

public:
    Customer(string name, int balance, int accountNumber)
    {
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    // Deposit  Amount
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " Rs/- is credited successfully.\n";
        }
        else
        {
            //* We know that this error occur on runtime, so we can use throw runtime_error("msg");. Here runtime_error is a class & it will throw and object of type runtime_error.
            //* runtime_error("msg") directly call constructor.
            throw InvalidAmountError("Amount should be greater than 0.\n");
            //* Because of throw keyword below line of code is not executed.
            cout << "Hello Throw\n";
        }
    }

    // Withdraw Amount.
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " Rs/- is debited successfully.\n";
        }
        else if (amount < 0)
        {
            throw InvalidAmountError("Amount should be greater than 0.\n");
        }
        else
        {
            throw InsufficientBalanceError("Your balance is low.\n");
        }
    }
};

int main()
{
    system("clear");
    Customer C1("Madhur", 5000, 7610);

    try
    {
        C1.deposit(100);
        // C1.withdraw(6000);
        C1.withdraw(-8);
        //* Here C1.withdraw(6000) is an exception, that's why below this no line would be executed, & the program goes to next block/catch.
        C1.deposit(1000);
        C1.withdraw(1000);
    }
    //* Here c is pointer that pointes to char type value basically it points to throw keyword message.
    catch (const InvalidAmountError &e)
    {
        cout << "Exception Occurred: " << e.what() << endl; // In this e prints the throw keyword message.
    }
    //* We can write multiple catch function.
    catch (const InsufficientBalanceError &e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }
    //* How to make default catch function.
    catch (...)
    {
        cout << "Exception Occurred: \n";
    }

    return 0;
}