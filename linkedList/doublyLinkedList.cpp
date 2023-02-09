#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *insertAtEnd(int val)
{
    Node *temp = new Node();
    temp->data = val;

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
            head = insertAtEnd(val);
            tail = head;
        }
        else
        {
            tail->next = insertAtEnd(val);
            tail->prev = tail->next;
            tail = tail->next;
        }
    }

    traverse(head);
    cout << "--------" << endl;
    reverseTraverse(tail);

    cout << endl
         << "HEAD --> " << head << endl
         << "TAIL --> " << tail;
}