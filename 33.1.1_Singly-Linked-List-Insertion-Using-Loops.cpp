//* Insertion using loops in Linked List.
// todo Visualization link:- https://excalidraw.com/#json=H7C2SbYLRuD4kcviuvvWn,WeYkH-Bt_RkHf60KrqB29A
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

// Print the value.
void printLL(Node *Head)
{
    Node *temp = Head;
    // while (temp != NULL)
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    system("clear");
    //* Static way.
    // Node A1(4);

    //* Dynamic Way.
    Node *Head;
    // Head = new Node(4);
    // cout << Head->data << endl;
    // cout << Head->next << endl;

    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    // Insert the Node at Beginning. Tc:- O(n), Total SC:- O(n), Auxilary SC:- O(1).
    // Linked list doesn't exist.
    // for (int i = 0; i < 5; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new Node(arr[i]);
    //     }
    //     // Linked list exists.
    //     else
    //     {
    //         Node *temp;
    //         temp = new Node(arr[i]);
    //         temp->next = Head;
    //         Head = temp;
    //     }
    // }
    // // Print the value.
    // printLL(Head);

    // Insert the node at the end. TC:- O(n^2), Total SC:- O(n), Auxilary SC:- O(1).
    // Linked list is not exist.
    // for (int i = 0; i < 5; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new Node(arr[i]);
    //     }
    //     // Linked list exists.
    //     else
    //     {
    //         Node *tail = Head;
    //         while (tail->next != NULL)
    //         {
    //             tail = tail->next;
    //         }
    //         // Node *insert;
    //         // insert = new Node(-1);
    //         // tail->next = insert;
    //         tail->next = new Node(arr[i]);
    //     }
    // }

    // Insert the node at the end. TC:- O(n), Total SC:- O(n), Auxilary SC:- O(1).
    Node *tail = NULL;
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail = Head;
        }
        // Linked list exists.
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Print the value.
    printLL(Head);

    return 0;
}