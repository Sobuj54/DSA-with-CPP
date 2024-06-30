#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        prev = NULL;
        next = NULL;
    }
};

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_position(Node *head, int pos, int val)
{
    if (pos >= size(head) || pos == 0)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    print(head);
    insert_at_position(head, 3, 300);
    print(head);
    print_reverse(tail);
    insert_at_head(head, tail, 100);
    print(head);
    print_reverse(tail);
    insert_at_tail(head, tail, 400);
    print(head);
    print_reverse(tail);

    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print(head);
    print_reverse(tail);
    return 0;
}