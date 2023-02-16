#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int n = 1000;
    int arr[1000];
    int front = 0;
    int rear = 0;

public:
    void push(int val)
    {
        if (rear == n - 1)
        {
            cout << "Queue is Full" << endl;
        }

        else
        {
            arr[rear] = val;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
        }

        else
        {
            for (int i = front; i < rear; i++)
            {
                arr[i] = arr[i + 1];
            }
            rear--;
        }
    }

    void display()
    {
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty()
    {
        if (front == rear)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int n;
    cin >> n;

    Queue q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    q.display();

    q.pop();
    q.display();
    cout << "Is Empty --> " << q.isEmpty() << endl;
}
