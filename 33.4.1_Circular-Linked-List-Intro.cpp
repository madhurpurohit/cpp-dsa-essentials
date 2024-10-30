//* Singly & Doubly Circular Linked List.
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

class DCNode
{
public:
    int data;
    DCNode *next;
    DCNode *previous;

    DCNode(int value)
    {
        data = value;
        next = NULL;
    }
};

void printSCLL(Node *Head)
{
    Node *temp = Head->next;
    cout << Head->data << " ";

    while (temp != Head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printDCLL(DCNode *Head)
{
    DCNode *temp = Head->next;

    cout << "Circular Linked List in Forward Direction:\n";
    cout << Head->data << " ";

    while (temp != Head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Circular Linked List in Backward Direction.\n";
    temp = temp->previous;
    while (temp != Head)
    {
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << temp->data << endl;
}

Node *createSCLL(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = createSCLL(arr, index + 1, size);
    return temp;
}

DCNode *createDCLL(int arr[], int index, int size, DCNode *back)
{
    if (index == size)
        return NULL;

    DCNode *temp = new DCNode(arr[index]);
    temp->previous = back;
    temp->next = createDCLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    system("clear");
    Node *SCHead = NULL;
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Create singly circular list from given array.
    SCHead = createSCLL(arr, 0, size);

    //* Link last node to first node.
    Node *SCtemp = SCHead;
    while (SCtemp->next)
    {
        SCtemp = SCtemp->next;
    }
    SCtemp->next = SCHead;

    //* Print singly circular linked list.
    printSCLL(SCHead);
    cout << endl;

    //* Doubly Circular Linked List.
    DCNode *DCHead = NULL;

    //* Create doubly circular linked list from given array.
    DCHead = createDCLL(arr, 0, size, NULL);

    //* Link last node to first node.
    DCNode *DCtemp = DCHead;
    while (DCtemp->next)
    {
        DCtemp = DCtemp->next;
    }
    DCtemp->next = DCHead;
    DCHead->previous = DCtemp;

    //* Print singly circular linked list.
    printDCLL(DCHead);

    return 0;
}