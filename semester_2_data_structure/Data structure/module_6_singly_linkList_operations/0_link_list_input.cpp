#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    cout << "your linked list: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    printLinkedList(head);
    return 0;
}