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

    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (k == A[mid])
        {
            cout << "Found at " << mid << endl;
            break;
        }

        else if (k < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}