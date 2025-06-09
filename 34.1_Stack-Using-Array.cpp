//* Introduction to Stack. Implement Stack using Array.
//* Visual link:- https://excalidraw.com/#json=4BTiRVDdQ67wdNUhuJKS0,QK94dKcQwBw-pr7Eu3cSOA
// todo In this we can only insert positive integer only, not negative. Because when we insert -1 than it will inserted but when we find peak element than it will show -1, which is right. But how can i differentiate that my stack is empty or not, because for empty stack we return -1 in peak function. So to prevent this error we make another function flag().

#include <iostream>
using namespace std;

//? Implement Stack with using Array.
class Stack
{
    int *arr;
    int size, top;

public:
    bool flag;
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
        flag = 1;
    }

    // Push method.
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow!\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack.\n";
            flag = 0;
        }
    }

    // Pop method.
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!\n";
            return;
        }
        else
        {
            cout << "Popped " << arr[top] << " from the stack.\n";
            top--;

            if (top == -1)
                flag = 1;
            // cout << "Popped " << arr[top + 1] << " from the stack.\n";
        }
    }

    // Peak/Top Element.
    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // Size of stack, means how many elements are presented currently.
    int isSize()
    {
        return top + 1;
    }

    // Empty method. To know is stack empty or not.
    bool isEmpty()
    {
        // if (top == -1)
        // {
        //     return 1;
        // }
        // else
        //     return 0;

        return top == -1;
    }
};

int main()
{
    Stack S(5);

    // Push Operation on Stack.
    S.push(10);
    S.push(-1);
    S.push(15);
    S.push(18);
    S.push(22);

    // For overflow condition.
    S.push(25);
    cout << endl;

    // Pop Operation on Stack.
    S.pop();
    S.pop();
    S.pop();

    // For underflow condition.
    // S.pop();
    // S.pop();
    // S.pop();
    cout << endl;

    // Size Operation on Stack.
    cout << "Size of Stack is: " << S.isSize() << endl;
    cout << endl;

    // Peak Element operation on Stack. That is valid for only positive number.
    cout << "Peak element in Stack is: " << S.peak() << endl;
    cout << endl;

    // Peak element for negative number.
    int value = S.peak();
    if (S.flag == 0)
    {
        cout << "Peak element in Stack is: " << value << endl;
        cout << endl;
    }

    // Empty operation on Stack.
    cout << "Is stack empty: " << (S.isEmpty() ? "Yes" : "No") << endl;
    cout << endl;

    return 0;
}