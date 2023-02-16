#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node createNode(int val)
    {
        Node newNode = new Node();
        newNode.value = val;
        return newNode;
    }

    void printLinkedList(Node *head)
    {

        cout << "HEAD -> ";
        while (head != NULL)
        {
            cout << head->value << " -> ";
            head = head->next;
        }
        cout << "NULL";
    }
};

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;

        if (temp == NULL)
        {
            head = createNode();
            temp = head;
        }
        else
        {
            temp->next = createNode();
            temp = temp->next;
        }
    }

    printLinkedList(head);
}
