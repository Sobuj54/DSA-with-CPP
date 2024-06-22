#include <iostream>
using namespace std;

// creating node
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
    Node a(30), b(20);

    a.next = &b;

    cout << a.value << endl;
    cout << a.next->value << endl;
    return 0;
}