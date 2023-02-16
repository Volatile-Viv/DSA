#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{

public:
    Node *front = NULL;
    Node *rear = NULL;

    void push(int val)
    {
        Node *temp = new Node();
        temp->data = val;

        if (front == NULL)
        {
            front = temp;
            rear = front;
        }

        else
        {
            rear->next = temp;
            rear = rear->next;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
        }

        front = front->next;
    }

    bool isEmpty()
    {
        if (front == rear)
            return 1;
        else
            return 0;
    }

    int size()
    {
        Node *temp = front;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }

    void traverse()
    {
        Node *temp = front;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        q.push(val);
    }

    q.traverse();

    q.pop();

    q.traverse();

    cout << "Is Empty -> " << q.isEmpty() << endl;

    cout << "Size -> " << q.size() << endl;

    cout << endl
         << "Front -> " << q.front->data << endl
         << "Rear -> " << q.rear->data << endl;
}