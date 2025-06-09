//* Insertion in Doubly Linked List using loops.
//* Visualization links:- https://excalidraw.com/#json=Shjho94Z-7k8X53pFZEWn,GSw7QIDCUwE1Yqt6VBkaqg
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

int main()
{
    Node *Head = NULL;
    int arr[] = {10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Insertion at beginning using loops.
    // for (int i = 0; i < size; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *temp = new Node(arr[i]);
    //         temp->next = Head;
    //         Head->previous = temp;
    //         Head = temp;
    //     }
    // }

    // // * Print Linked List.
    // printLL(Head);

    //* Insertion at End using Loops. TC:- O(size^2) Due to nested traversal & SC:-O(size).
    // for (int i = 0; i < size; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *temp = Head;
    //         while (temp->next)
    //         {
    //             temp = temp->next;
    //         }
    //         temp->next = new Node(arr[i]);
    //         temp->next->previous = temp; // In this temp->next means new node & temp->next->previous means new node's previous pointer points to temp.
    //     }
    // }

    //* Insertion at End using Loops. TC:- O(n+size) & SC:-O(size) Because of tail pointer our TC for inserting an element is O(1).
    Node *tail = Head;
    while (tail && tail->next)
    {
        tail = tail->next;
    }

    for (int i = 0; i < size; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail = Head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail->next->previous = tail;
            tail = tail->next;
        }
    }

    //* Print Linked List.
    printLL(Head);

    return 0;
}