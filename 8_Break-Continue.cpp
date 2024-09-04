#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    // Break statement.
    cout<<"Break Statement: ";
    for (int i = 1; i <= num; i++)
    {
        if (i == 7)
        {
            break;
        }
        cout << i << " ";
    }

    cout<<endl;

    //Continue statement.
    cout<<"Continue Statement: ";
    for (int i = 1; i <= num; i++)
    {
        if (i==7)
        {
            continue;
        }
        cout<<i<<" ";
    }
    
}