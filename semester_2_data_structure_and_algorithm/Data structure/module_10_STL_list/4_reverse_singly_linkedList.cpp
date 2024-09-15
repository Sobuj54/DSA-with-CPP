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

void print(Node *head)
{
    Node *temp = head;
    cout << "your linked list: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void reverse(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->next = b;
    b->next = c;

    print(head);
    cout << endl;
    reverse(head, head);
    print(head);
    return 0;
}