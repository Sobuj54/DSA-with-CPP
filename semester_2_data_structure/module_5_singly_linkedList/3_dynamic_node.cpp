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

int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);

    head->next = a;

    cout << head->value << endl;
    cout << head->next->value << endl;
    return 0;
}