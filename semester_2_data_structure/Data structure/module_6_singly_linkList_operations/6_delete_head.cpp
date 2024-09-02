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

void insertAtPosition(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void deleteFromPosition(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

void deleteHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Enter option 1: insert at tail \n";
        cout << "Enter option 2: Print linked list \n";
        cout << "Enter option 3: insert at position \n";
        cout << "Enter option 4: insert at head \n";
        cout << "Enter option 5: delete at position \n";
        cout << "Enter option 6: delete head \n";
        cout << "Enter option 7: Terminate \n";
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
        else if (op == 3)
        {
            int x, pos;
            cout << "Enter postion: ";
            cin >> pos;
            cout << "Enter value : ";
            cin >> x;
            if (pos == 0)
            {
                insertAtHead(head, x);
            }
            else
                insertAtPosition(head, pos, x);
        }
        else if (op == 4)
        {
            int val;
            cout << "enter value: ";
            cin >> val;
            insertAtHead(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "enter postion to delete : ";
            cin >> pos;
            if (pos == 0)
            {
                deleteHead(head);
            }
            else
                deleteFromPosition(head, pos);
        }
        else if (op == 6)
        {
            deleteHead(head);
        }
        else
        {
            break;
        }
    }

    return 0;
}