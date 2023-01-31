#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

// insertion

Node *insert(int val)
{
    Node *newNode = new Node();
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

// displaying

void traverse(Node *head)
{
    if (head == NULL)
        cout << "nothing";
    else
    {
        cout << "HEAD -> ";

        while (head != NULL)
        {
            cout << head->value << " -> ";
            head = head->next;
        }

        cout << "NULL";
    }
}
int main()
{
    int n;
    cin >> n;

    Node *head = new Node();
    Node *ptr = new Node();

    head = NULL;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (head == NULL)
        {
            head = insert(temp);
            ptr = head;
        }
        else
        {
            ptr->next = insert(temp);
            ptr = ptr->next;
        }
    }

    traverse(head);
}