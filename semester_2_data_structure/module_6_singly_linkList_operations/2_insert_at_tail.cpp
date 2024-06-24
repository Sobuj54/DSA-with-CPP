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
        cout << "Enter option 1: insert at tail \n";
        cout << "Enter option 2: Print linked list \n";
        cout << "Enter option 3: Terminate \n";
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value to insert at tail: ";
            int n;
            cin >> n;
            insertAtTail(head, n);
        }
        else if (op == 2)
        {
            printLinkedList(head);
            cout << "\n";
        }
        else
        {
            break;
        }
    }

    return 0;
}