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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = inputTree();
    cout << max_height(root) << endl;
    return 0;
}