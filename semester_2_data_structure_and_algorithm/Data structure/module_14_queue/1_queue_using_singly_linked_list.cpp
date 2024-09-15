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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;

    void push(int val)
    {
        len++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        len--;
        Node *del = head;
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            delete del;
            return;
        }
        head = head->next;
        delete del;
    }

    int front()
    {
        return head->value;
    }

    int size()
    {
        return len;
    }

    bool empty()
    {
        return len == 0 ? true : false;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}