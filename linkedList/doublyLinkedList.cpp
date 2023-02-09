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

Node *insertAtStart(int val, Node *head)
{
    Node *temp = new Node();
    temp->data = val;

    temp->next = head;
    head->prev = temp;

    return temp;
}

void insertAtPosition(int val, int n, Node *head)
{
    Node *temp = new Node();
    temp->data = val;

    while (--n)
    {
        head = head->next;
    }

    temp->next = head->next;
    head->next->prev = temp;

    head->next = temp;
    temp->prev = head;
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
    reverseTraverse(tail);

    cout << "Insert at Head -" << endl;
    head = insertAtStart(69, head);
    traverse(head);

    cout << "Insert at Position 3 -" << endl;
    insertAtPosition(420, 3, head);
    traverse(head);

    cout << "HEAD --> " << head->data << endl
         << "TAIL --> " << tail->data;
}