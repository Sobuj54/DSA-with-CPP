#include <iostream>
#include <list>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

class myStack
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
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        len--;
        Node *del = tail;
        if (tail->prev == NULL)
        {
            tail = tail->prev;
            head = NULL;
            delete del;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
    int top()
    {
        return tail->value;
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
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}