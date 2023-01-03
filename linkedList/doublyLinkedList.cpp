#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
};

Node *insert(int val)
{
    Node *newNode = new Node();
    newNode->value = val;
    return newNode;
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
        cout << head->value << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *ptr;

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
}