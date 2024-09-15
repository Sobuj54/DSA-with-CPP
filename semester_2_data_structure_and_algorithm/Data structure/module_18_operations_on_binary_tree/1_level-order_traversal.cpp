#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. store the first node and pop the front node
        Node *first = q.front();
        q.pop();

        // 2.display the value
        cout << first->val << "  ";

        // 3. push the left and right nodes if available
        if (first->left)
            q.push(first->left);
        if (first->right)
            q.push(first->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    levelOrder(root);
    return 0;
}