#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *insertAtHead(Node *head, int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = head;
    head = temp;

    return head;
}

Node *insertAtTail(int val)
{
    Node *temp = new Node();
    temp->data = val;

    return temp;
}

void insertAtPosition(Node *head, int pos, int val)
{
    Node *temp = new Node();
    temp->data = val;

    while (--pos)
    {
        head = head->next;
    }

    temp->next = head->next;
    head->next = temp;
}

void traverse(Node *head)
{
    cout << "HEAD -> ";
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    int n;
    cin >> n;

    Node *head = new Node();
    Node *tail = new Node();

    head = NULL;
    tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (head == NULL)
        {
            head = insertAtTail(val);
            tail = head;
        }

        else
        {
            tail->next = insertAtTail(val);
            tail = tail->next;
        }
    }

    traverse(head);

    cout << endl;

    insertAtPosition(head, 2, 69);

    cout << endl;

    traverse(head);

    cout << endl;

    cout << "HEAD -> " << head->data << endl;
    cout << "TAIL -> " << tail->data;
}