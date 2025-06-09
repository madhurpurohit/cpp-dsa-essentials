//* Insertion a single value in Doubly linked list.
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;

    Node(int value)
    {
        data = value;
        next = NULL;
        previous = NULL;
    }
};

void printLL(Node *Head)
{
    Node *temp = Head;
    cout << " Linked List In Froward Direction:\n";
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    cout << endl;

    cout << " Linked List In Backward Direction:\n";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;
    int number, value;
    cout << "Enter the number of value that you want to insert:\n";
    cin >> number;

    //* Insertion at beginning.
    for (int i = 0; i < number; i++)
    {
        cout << "Enter value: ";
        cin >> value;

        if (Head == NULL)
        {
            Head = new Node(value);
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = Head;
            Head->previous = temp;
            Head = temp;
        }
    }

    //* Print Linked List.
    printLL(Head);

    //* Insertion at End.
    for (int i = 0; i < number; i++)
    {
        cout << "Enter value: ";
        cin >> value;

        if (Head == NULL)
        {
            Head = new Node(value);
        }
        else
        {
            Node *current = Head;
            while (current->next)
            {
                current = current->next;
            }
            Node *temp = new Node(value);
            temp->previous = current;
            current->next = temp;
        }
    }

    //* Print Linked List.
    printLL(Head);

    return 0;
}