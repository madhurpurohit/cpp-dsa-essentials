//* Delete a Node from Doubly Linked List.
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

Node *deleteFirstNode(Node *Head)
{
    Node *temp = Head;
    Head = Head->next;
    Head->previous = NULL;
    delete temp;

    return Head;
}

void deleteLastNode(Node *Head)
{
    Node *tempEnd = Head;
    while (tempEnd->next)
    {
        tempEnd = tempEnd->next;
    }
    tempEnd->previous->next = NULL;
    delete tempEnd;
}

int main()
{
    system("clear");
    Node *Head = NULL;
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int arr[] = {10};
    int size = sizeof(arr) / sizeof(arr[0]);

    Head = createDLL(arr, 0, size, NULL);

    printLL(Head);

    //* Edge case for deletion if Head doesn't exist.
    if (Head == NULL)
    {
        cout << "Deletion is not possible because Linked LIst doesn't exist.\n";
        return 0;
    }
    //* if there is only one Node in Linked List.
    else if (Head->next == NULL)
    {
        delete Head;
        Head = NULL;
        cout << "There is only one element is presented & that is deleted, so Linked List is empty now.\n";
        return 0;
    }

    //* Deletion at start.
    Head = deleteFirstNode(Head);

    cout << endl;
    cout << "Linked List after deleting first Node.\n";
    printLL(Head);

    //* Deletion at end.
    deleteLastNode(Head);

    cout << endl;
    cout << "Linked List after deleting last Node.\n";
    printLL(Head);

    //* Deletion at position.
    int position, tempPos;
    cout << "Enter position: ";
    cin >> position;
    tempPos = position;

    if (position <= 0)
    {
        cout << "Position is either negative or zero & we can't access this location, so please enter valid position.\n";
        return 0;
    }
    int totalNodes = 1;
    Node *current = Head;

    while (current->next)
    {
        current = current->next;
        totalNodes++;
    }

    if (position > totalNodes)
    {
        cout << "You want to access a location that is out of Linked List, please enter a valid position.\n";
    }
    else
    {
        //* If the deleted Node is first Node.
        if (position == 1)
        {
            Node *temp = Head;
            Head = Head->next;
            Head->previous = NULL;
            delete temp;
        }

        //* If the deleted Node is last Node.
        else if (position == totalNodes)
        {
            current->previous->next = NULL;
            delete current;
        }

        //* If the deleted Node is between the first & last Node of Linked List.
        else
        {
            current = Head;
            while (--position)
            {
                current = current->next;
            }
            current->previous->next = current->next;
            current->next->previous = current->previous;
            delete current;
        }

        cout << endl;
        cout << "Linked List after deleting " << tempPos << " Node.\n";
        printLL(Head);
    }

    return 0;
}