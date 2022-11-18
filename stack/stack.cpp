#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int A[1000];
    int end;

public:
    Stack()
    {
        end = 0;
    }

    void push(int val)
    {
        A[end] = val;
        end++;
        cout << "Pushed " << val << " at " << end - 1 << endl;
    }

    void top()
    {
        cout << A[end - 1] << " at " << end - 1 << endl;
    }

    void pop()
    {
        cout << "Deleted " << A[end - 1] << endl;
        end--;
    }

    void size()
    {
        cout << "Size is " << end << endl;
    }

    bool isEmpty()
    {
        return end;
    }
};

int main()
{
    Stack s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        s.push(t);
    }

    cout << endl;

    s.isEmpty();

    cout << endl;

    s.size();

    cout << endl;

    s.top();

    cout << endl;

    s.pop();
}