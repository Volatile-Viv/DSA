#include <bits/stdc++.h>
#include <queue>

using namespace std;

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

    // traverse
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << q.front() << " ";
    //      q.pop();
    //  }

    cout << "First element - " << q.front() << endl;

    cout << "Last element - " << q.back() << endl;

    cout << "Is Empty - " << q.empty() << endl;

    cout << "Size - " << q.size() << endl;
}