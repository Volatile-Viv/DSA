#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *push(int val, Node *head)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = head;

    return temp;
}

void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *pop(Node *head)
{
    head = head->next;
    return head;
}

bool empty(Node *head)
{
    if (head == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        head = push(val, head);
    }

    traverse(head);

    cout << "After popping - " << endl;
    head = pop(head);
    traverse(head);

    cout << "Is Empty - " << empty(head) << endl;
}