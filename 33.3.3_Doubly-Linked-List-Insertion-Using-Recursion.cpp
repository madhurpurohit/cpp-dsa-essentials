//* Insertion in Doubly Linked List using Recursion.
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
        next = previous = NULL;
    }
};

void printLL(Node *Head)
{
    Node *temp = Head;

    cout << "Linked List from starting to end:\n";
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    cout << endl;

    cout << "Linked List from end to starting:\n";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << endl;
}

//* Recursion function to insert element at end.
Node *createDLL(int arr[], Node *back, int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->previous = back;
    temp->next = createDLL(arr, temp, index + 1, size);
    return temp;
}

//* Recursion function to insert element at beginning. TC:- O(n).
Node *createDLL(int arr[], int index, int size, Node *head)
{
    // Base case: if index reaches size, return the head of the list
    if (index == size)
    {
        return head;
    }

    // Create a new node with the current array element
    Node *newNode = new Node(arr[index]);

    // Insert newNode at the beginning of the list
    newNode->next = head;

    // If head is not NULL, set its previous pointer to newNode
    if (head != NULL)
    {
        head->previous = newNode;
    }

    // Update head to newNode and move to the next element
    return createDLL(arr, index + 1, size, newNode);
}

int main()
{
    Node *Head = NULL;
    int arr[] = {11, 12, 13, 14, 15, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    // //* Insertion at end using recursion.
    // Head = createDLL(arr, NULL, 0, size);

    // //* Print Linked List.
    // printLL(Head);

    //* Insertion at beginning using recursion.
    Head = createDLL(arr, 0, size, NULL);

    //* Print Linked List.
    printLL(Head);

    return 0;
}