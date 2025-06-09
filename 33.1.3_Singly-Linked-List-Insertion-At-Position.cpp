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

// Insertion using recursion at end.
Node *createLL(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);
    return temp;
}

// Print Linked List.
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

int main()
{
    Node *Head = NULL;
    int arr[] = {1, 3, 5, 7, 9, 11};

    //* Create Linked list Or insertion.
    Head = createLL(arr, 0, 6);

    // Insertion at position.
    int position = 2, value = 30;

    Node *temp = Head;
    position--;

    while (position--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Call to Print linked list.
    printLL(Head);

    return 0;
}