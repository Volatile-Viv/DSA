#include <bits/stdc++.h>
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
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data --> ";
    int val;
    cin >> val;

    root = new Node(val);

    if (val == -1)
        return NULL;

    cout << "Enter the data for left Node - " << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for right Node - " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    Node *root = NULL;

    root = buildTree(root);

    cout << root->val;
}