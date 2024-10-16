//* Why we need virtual function.
//* If we make a parent class pointer than we can access it's all child class function if & only if that function is presented into parent class as well as child class.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Forest
{
public:
    //* Pure virtual function or Abstract class. Because of this we cannot make any object of this Animal class, this is only one condition of that function.
    virtual void display() = 0;
};

//* If we want that our class object if form in this case we use pure virtual function.
class Animal
{
public:
    virtual void speak() = 0;

    // virtual void speak()
    // {
    //     cout << "Hu Hu\n";
    // }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark\n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow\n";
    }
};

int main()
{
    system("clear");
    Animal *p;

    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    // animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    //* Here our task is to get the address from this vector & print the output of speak() function according to the address/Object.
    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }

    return 0;
}