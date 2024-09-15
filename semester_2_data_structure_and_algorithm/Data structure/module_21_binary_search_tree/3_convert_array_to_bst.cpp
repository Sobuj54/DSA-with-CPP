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

Node *convertToBST(int arr[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftNode = convertToBST(arr, n, l, mid - 1);
    Node *rightNode = convertToBST(arr, n, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Node *root = convertToBST(arr, n, 0, n - 1);
    levelOrder(root);
    return 0;
}