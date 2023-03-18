#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int k;
    cout << "To search --> ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
            cout << "Found at " << i << endl;
        }
    }
}