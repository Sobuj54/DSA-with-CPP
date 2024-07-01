#include <iostream>
#include <algorithm>
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

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->prev != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    // Node *d = new Node(50);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    // c->next = d;
    // d->prev = c;

    print(head);
    reverse(head, tail);
    print(head);
    return 0;
}