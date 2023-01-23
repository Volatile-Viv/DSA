#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }

    Node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};

Node *create(Node *root)
{
    int d;

    cout << "Enter the value --> ";
    cin >> d;

    root = new Node(d);

    if (d == -1)
        return NULL;

    cout << "Enter the value for left of " << d << endl;
    root->left = create(root->left);

    cout << "Enter the value for right of " << d << endl;
    root->right = create(root->right);

    return NULL;
}

int main()
{
    Node *root;

    create(root);
}