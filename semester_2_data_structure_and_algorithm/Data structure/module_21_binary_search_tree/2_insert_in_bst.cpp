#include <iostream>
#include <queue>
#include <algorithm>
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

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *first = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        l == -1 ? myLeft = NULL : myLeft = new Node(l);
        r == -1 ? myRight = NULL : myRight = new Node(r);
        first->left = myLeft;
        first->right = myRight;

        if (first->left)
            q.push(first->left);
        if (first->right)
            q.push(first->right);
    }

    return root;
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->val << "  ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert(root->left, x);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert(root->right, x);
    }
}

int main()
{
    Node *root = inputTree();
    insert(root, 10);
    levelOrder(root);
    return 0;
}