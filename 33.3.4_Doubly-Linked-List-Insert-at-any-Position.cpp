//* Insert an Node at any position in Doubly Linked List.
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *previous;
    Node *next;

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

Node *createDLL(int arr[], int index, int size, Node *Head)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->previous = Head;
    temp->next = createDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    system("clear");
    Node *Head = NULL;
    int arr[] = {10, 20, 30, 40, 50};

    Head = createDLL(arr, 0, 5, NULL);

    printLL(Head);

    int position, value;
    cout << "Enter the position: ";
    cin >> position;
    cout << "Enter value: ";
    cin >> value;

    //* Insert at out of bound position.
    if (position < 0)
    {
        cout << "Invalid position, Please enter the right position!\n";
        return 0;
    }

    //* Insert at start.
    if (position == 0)
    {
        //* Linked List doesn't exist.
        if (Head == NULL)
        {
            Head = new Node(value);
        }
        //* Linked List Exist.
        else
        {
            Node *temp = new Node(value);
            Head->previous = temp;
            temp->next = Head;
            Head = temp;
        }
    }
    else
    {
        //* Goto the position after which we want enter a value.
        Node *current = Head;
        while (current->next && --position)
        {
            current = current->next;
        }
        //* Insert at end.
        if (current->next == NULL)
        {
            Node *temp = new Node(value);
            temp->previous = current;
            current->next = temp;
        }
        //* Insert at middle.
        else
        {
            Node *temp = new Node(value);
            temp->previous = current;
            temp->next = current->next;
            current->next = temp;
            temp->next->previous = temp;
        }
    }

    printLL(Head);

    return 0;
}