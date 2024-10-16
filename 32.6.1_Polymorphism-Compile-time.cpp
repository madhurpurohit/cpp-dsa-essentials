#include <iostream>
using namespace std;

//* Function Overloading.
class Area
{
public:
    int calculateArea(int n) // Circle area
    {
        return 3.14 * n * n;
    }

    int calculateArea(int l, int b) // Rectangle area.
    {
        return l * b;
    }
};

//* Operator Overloading.
// If we want to add to complex number i.e. C1+C2, it cannot done automatically although "+" operator is known for addition but it will work only with pre-defined data type & here we use class which is known as user defined data type, for that we have to give an function that will execute C1+C2. This is known as operator overloading.
class Complex // Complex number is in the form of "a+ib" Or "A+iB" or "3+i4".
{
    int real, imaginary;

public:
    Complex() // Default constructor for ans object.
    {
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }

    //* Here we define Complex C3=C1+c2, where C1 calls this "+" function & C2 pass as an argument.
    Complex operator+(Complex &C)
    {
        Complex ans;
        //* Within the class we can use same type of objects attributes.
        ans.real = real + C.real;
        ans.imaginary = imaginary + C.imaginary;
        return ans;
    }
};

int main()
{
    // system("clear");
    // todo Function Overloading.
    Area A1, A2;
    cout << "Area of circle: " << A1.calculateArea(4) << endl;

    // cout << "Area of rectangle: " << A1.calculateArea(3, 4) << endl;
    cout << "Area of rectangle: " << A2.calculateArea(3, 4) << endl;

    //* Which is called compile time error.
    // cout << "Area: " << A2.calculateArea("Madhur") << endl;

    // todo Operator Overloading.
    Complex C1(3, 2);
    Complex C2(4, 6);

    Complex C3 = C1 + C2;
    C3.display();

    return 0;
}