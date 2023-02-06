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

Node *deleteFromStart(Node *head)
{
    head = head->next;

    return head;
}

Node *deleteFromEnd(Node *head, Node *tail)
{
    while (head->next->next != NULL)
    {
        head = head->next;
    }

    head->next = NULL;

    return head; // it is tail
}

void deleteAtPosition(Node *head, int pos)
{
    while (--pos)
    {
        if (head == NULL)
        {
            cout << "Out of range" << endl;
            return;
        }
        head = head->next;
    }

    head->next = head->next->next;
}

void traverse(Node *head)
{
    cout << "HEAD -> ";
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
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

    cout << "Insert at Head -" << endl;
    insertAtHead(head, 420);
    traverse(head);

    cout << "Insert at Position -" << endl;
    insertAtPosition(head, 2, 69);
    traverse(head);

    cout << "Delete from Head -" << endl;
    head = deleteFromStart(head);
    traverse(head);

    cout << "Delete from End -" << endl;
    tail = deleteFromEnd(head, tail);
    traverse(head);

    cout << "Delete at Position -" << endl;
    deleteAtPosition(head, 7);
    traverse(head);

    cout << endl;
    cout << "HEAD -> " << head->data << endl;
    cout << "TAIL -> " << tail->data;
}