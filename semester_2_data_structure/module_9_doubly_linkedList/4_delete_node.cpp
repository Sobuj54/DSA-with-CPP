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

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete del;
}

void delete_at_tail(Node *&tail)
{
    Node *del = tail;
    tail = tail->prev;
    delete del;
    tail->next = NULL;
}

void delete_head(Node *&head)
{
    Node *del = head;
    head = head->next;
    delete del;
    head->prev = NULL;
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
    print_reverse(tail);
    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_at_tail(tail);
    }
    else
    {
        delete_at_position(head, pos);
    }
    print(head);
    print_reverse(tail);
    return 0;
}