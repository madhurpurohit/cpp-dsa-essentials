#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(41);
    v.push_back(14);
    v.push_back(24);
    v.push_back(84);

    cout << endl;

    // Print vector.
    cout << "Element of vector are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    cout << endl;

    v.pop_back();

    // Print vector.
    cout << "Element of vector after remove last element: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector after remove last element: " << v.size() << endl;
    cout << "Capacity of vector after remove last element: " << v.capacity() << endl;
    cout << endl;

    v.erase(v.begin() + 1);

    // Print vector.
    cout << "Element of vector after erase one element: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector after erase an element: " << v.size() << endl;
    cout << "Capacity of vector after erase an element: " << v.capacity() << endl;
    cout << endl;

    // Insert an element.
    v.insert(v.begin() + 1, 18); // Insert 18 into index 1.

    // Print vector.
    cout << "Element of vector after insert an element: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector after insert an element: " << v.size() << endl;
    cout << "Capacity of vector after insert an element: " << v.capacity() << endl;
    cout << endl;

    // Update value in vector v.
    v[1] = 5; // It means that update the value of 1st index with 5.

    // Print vector.
    cout << "Element of vector after update an element: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector after insert an element: " << v.size() << endl;
    cout << "Capacity of vector after insert an element: " << v.capacity() << endl;
    cout << endl;

    v.clear();
    cout << "Size of vector after remove all element: " << v.size() << endl;
    cout << "Capacity of vector after remove all element: " << v.capacity() << endl;
    cout << endl;

    // Create a vector.
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);

    // Print 1st element of vector.
    cout << arr[0] << endl;
    cout << arr.front() << endl;

    // Print last element of vector.
    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    // Create a vector.
    vector<int> a;
    // Copy value of 1 vector to another.
    a = arr;

    // Print vector.
    cout << "Element of vector: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}