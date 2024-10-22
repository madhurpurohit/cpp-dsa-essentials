//* Delete a Node from Linked list.
//* Problem:- Delete without head pointer. Means head pointer is not given.
//* Problem link:- https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printLL(Node *Head)
{
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *createLL(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);
    return temp;
}

//* Delete a particular node using recursion.
Node *deleteNode(Node *current, int x)
{
    if (x == 1)
    {
        Node *temp = current->next;
        delete current;
        return temp;
    }

    current->next = deleteNode(current->next, x - 1);
    return current;
}

int main()
{
    system("clear");
    Node *Head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    Head = createLL(arr, 0, size);

    cout << "Linked list before deletion:\n";
    printLL(Head);

    //* Delete First Node.
    cout << "Linked list after deletion of first Node:\n";

    if (Head != NULL)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;

        printLL(Head);
    }

    //* Delete Last Node.
    cout << "Linked list after deletion of last Node:\n";
    if (Head != NULL)
    {
        // If only one Node is present.
        if (Head->next == NULL)
        {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        // If more than one Node is present.
        else
        {
            Node *current = Head;
            Node *previous = NULL;
            while (current->next != NULL)
            {
                previous = current;      // It will stop one Node before last Node.
                current = current->next; // It will stop on last Node.
            }
            delete current;
            previous->next = NULL;
        }
        printLL(Head);
    }

    //* Delete a Particular Node On Linked List.
    int position = 1;

    cout << "Linked list after deletion of " << position << " Node:\n";
    if (Head != NULL)
    {
        if (position == 1)
        {
            Node *temp = Head;
            Head = Head->next;
            delete temp;
        }
        else
        {
            Node *current = Head;
            Node *previous = NULL;
            position--;
            while (position--)
            {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
            delete current;
        }
        printLL(Head);
    }

    //* Delete a particular Node using recursion call function.
    position = 3;
    deleteNode(Head, position);

    cout << "Linked list after deletion of " << position << " Node:\n";
    printLL(Head);

    return 0;
}