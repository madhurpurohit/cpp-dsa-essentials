#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark\n";
    }

    //* This will not allow, Because pointer can access those function which is presented in parent class & same function is present in derived class.
    void display()
    {
        cout << "Hello\n";
    }
};

int main()
{
    // We create a pointer that points animal class.
    Animal *p;

    // Because of new keyword is assign memory on the run time, means that it is created on run time.
    p = new Dog();

    // It will decide on compile time that which speak function is going to be call. Here the p is Animal type pointer that's why it is calling Animal class speak() function.
    p->speak();

    //* Here we want that we gave pointer p a Dog object so that it will call Dog class speak() function but it doesn't happen, So to achieve this output we use virtual keyword in-front of Or before Animal class speak() function. i.e. virtual void speak(){}
    //* In this virtual keyword means here p->speak(), didn't decide that which speak() function is going to be call on compile time rather than it will decide it on run time that which speak() function is going to be called.
    //* & on run time p points to Dog class object that's why it will call Dog class speak() function. Because p->speak() calls that type of function which is pointed or stored the address of which datatype/ Object.

    //* It will not work & show an error because the display() function is not present in Animal Or parent class that's why it's derived class which is Dog is not access this function.
    // p->display();

    return 0;
}