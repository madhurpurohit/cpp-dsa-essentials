//* Create Linked list using recursion & insertion in Linked List.
//* Visualization links position at end:- https://excalidraw.com/#json=8XlT9-b-GkhjxY1M21Ucu,SB_2_lS1KLzW486INoanzw
//* Visualization links position at beginning:- https://excalidraw.com/#json=bRdlmOA5xrGW449a0flQK,VB70OFPygxZ0yV-5GSRlQw
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

// Insertion Node at End. TC:-O(n), Total SC:-O(n), Auxilary SC:-O(n), Because of Stack.
Node *createLL(int arr[], int index, int size) // This will return Node type address.
{
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLL(arr, index + 1, size);
    return temp;
}

// Insertion Node at Beginning. TC:-O(n), Total SC:-O(n), Auxilary SC:-O(n), Because of Stack.
Node *createLL(int arr[], int index, int size, Node *previous)
{
    if (index == size)
        return previous;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = previous;
    return createLL(arr, index + 1, size, temp);
}

int main()
{
    system("clear");
    Node *Head = NULL;

    int arr[] = {10, 12, 14, 16, 18, 20};

    // Call recursion function for inserting at end.
    // Head = createLL(arr, 0, 6);

    // Call recursion function for inserting at beginning.
    Head = createLL(arr, 0, 6, NULL);

    printLL(Head);

    return 0;
}