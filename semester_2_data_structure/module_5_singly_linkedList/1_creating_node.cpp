#include <iostream>
using namespace std;

// creating node
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;

    a.next = &b;

    cout << a.value << endl;
    cout << a.next->value << endl;
    return 0;
}