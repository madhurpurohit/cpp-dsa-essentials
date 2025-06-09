//* Detect loop in singly circular linked list.
//* Visualization link:- https://excalidraw.com/#json=8sKHbWKuH8HHPOoNyAGT3,JGwJAZuEbyHrGo7opPCSnw
//* Problem link:- https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
#include <iostream>
#include <vector>
#include <unordered_map> // For unordered_map we use this include file.
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

//? TC:- O(n^2), SC:-O(n). In this we track the record of address that is any address repeats.
bool detectLoop(Node *Head)
{
    Node *temp = Head;
    vector<Node *> address;
    bool visited = false;

    while (temp)
    {
        int index = 0;
        while (index < address.size())
        {
            if (temp == address[index])
            {
                visited = true;
                return visited;
            }
            index++;
        }
        if (visited == true)
            break;
        else
            address.push_back(temp);

        temp = temp->next;
    }
    return visited;
}

//? TC:-O(n), SC:-O(n), In this we use unordered map.
bool detectLoop2(Node *Head)
{
    Node *temp = Head;

    //* Create Unordered map where key is address of every Node & value is in bool.
    unordered_map<Node *, bool> visited;

    while (temp)
    {
        if (visited[temp] == 1)
            return 1;

        visited[temp] = 1;
        temp = temp->next;
    }

    return 0;
}

//? TC:-O(n), SC:-O(1), In this we use slow & fast pointer approach.
bool detectLoop3(Node *Head)
{
    Node *slow = Head, *fast = Head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Create singly circular list from given array.
    Head = createSCLL(arr, 0, size);

    //* Link last node to first node.
    char decision;
    cout << "Do you want loop in liked list(Y/N):\n";
    cin >> decision;

    if (decision == 'y' || decision == 'Y')
    {
        int pos = 4;
        Node *start = Head;
        Node *end = Head;
        while (--pos)
        {
            start = start->next;
        }

        while (end->next)
        {
            end = end->next;
        }

        end->next = start;
    }
    system("clear");

    //* Print singly circular linked list.
    // printSCLL(Head);

    // todo How to detect a loop.
    cout << "Is there any loop in this linked list using vector: " << (detectLoop(Head) ? "Yes" : "No") << endl;

    cout << "Is there any loop in this linked list using unordered map: " << (detectLoop2(Head) ? "Yes" : "No") << endl;

    cout << "Is there any loop in this linked list using slow & fast pointer: " << (detectLoop3(Head) ? "Yes" : "No") << endl;

    return 0;
}