#include <bits/stdc++.h>
using namespace std;

void traverse(stack<int> k)
{
    while (!k.empty())
    {
        cout << k.top() << " ";
        k.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        s.push(val);
    }

    traverse(s);

    cout << "Popping at top -" << endl;
    s.pop();
    traverse(s);
}