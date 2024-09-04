#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create vector & declare.
    vector<int> v;

    // Size & capacity of vector v.
    cout << "Size of v:" << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    // If we insert element in vector v.
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // Size & capacity of vector v1 after inserting 3 element.
    cout << "Size of v after inserting 3 element:" << v.size() << endl;
    cout << "Capacity of v after inserting 3 element: " << v.capacity() << endl;

    // Remove last element from vector v.
    v.pop_back();

    // Size & capacity of vector v1 after removing the last element.
    cout << "Size of v after removing the last element:" << v.size() << endl;
    cout << "Capacity of v after removing the last element: " << v.capacity() << endl;

    // Update value in vector v.
    v[1] = 5; // It means that update the value of 1st index with 5.

    // Create  vector & initialize.
    vector<int> v1(5, 1); // It means the size of vector is 5 and all the element is 1.

    // Size & capacity of vector v1.
    cout << "Size of v1:" << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    // If we insert element in vector v1.
    v1.push_back(8);

    // Size & capacity of vector v1 after inserting an element.
    cout << "Size of v1 after inserting an element:" << v1.size() << endl;
    cout << "Capacity of v1 after inserting an element: " << v1.capacity() << endl;

    // Create vector & initialize.
    vector<int> v3 = {1, 2, 3, 4, 5}; // If it is not compatiable with vscode than we use ideaone online compiler.

    // Size & capacity of vector v3.
    cout << "Size of v3:" << v3.size() << endl;
    cout << "Capacity of v3: " << v3.capacity() << endl;
}