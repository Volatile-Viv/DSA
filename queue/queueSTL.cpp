#include <bits/stdc++.h>
#include <queue>

using namespace std;

void traverse(queue<int> k)
{
    while (!k.empty())
    {
        cout << k.front() << " ";
        k.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        q.push(t);
    }

    traverse(q);

    cout << "First element - " << q.front() << endl;

    cout << "Last element - " << q.back() << endl;

    cout << "Is Empty - " << q.empty() << endl;

    cout << "Size - " << q.size() << endl;

    cout << "Popped - " << endl;
    q.pop();

    traverse(q);
}