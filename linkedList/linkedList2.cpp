#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int val)
{
    Node *temp = new Node();
    temp->data = val;
    return temp;
}

void printLinkedList(Node *head)
{
    cout << "HEAD -> ";

    if (head == NULL)
    {
        cout << "YES";
    }

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}
int main()
{
    int n; // LinkedList of Size N
    cin >> n;

    Node *temp = NULL;
    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        // if head is null then assign the value to head
        if (head == NULL)
        {
            head = createNode(val);
            temp = head;
        }
        else
        {
            // temp is the end node of the linked list, new node will be next of temp
            temp->next = createNode(val);
            temp = temp->next;
        }
    }

    printLinkedList(head);
    return 0;
}