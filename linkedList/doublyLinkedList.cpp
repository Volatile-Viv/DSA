#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *insertAtEnd(int val, Node *tail)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (tail != NULL)
    {
        tail->next = temp;
        temp->prev = tail;
    }

    return temp;
}

void traverse(Node *head)
{
    cout << "HEAD -> ";
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "TAIL" << endl;
}

void reverseTraverse(Node *tail)
{
    cout << "TAIL -> ";
    while (tail != NULL)
    {
        cout << tail->data << " -> ";
        tail = tail->prev;
    }

    cout << "HEAD" << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (head == NULL)
        {
            head = insertAtEnd(val, tail);
            tail = head;
        }
        else
        {
            tail = insertAtEnd(val, tail);
        }
    }

    traverse(head);
    cout << "--------" << endl;
    reverseTraverse(tail);

    cout << endl
         << "HEAD --> " << head->data << endl
         << "TAIL --> " << tail->data;
}