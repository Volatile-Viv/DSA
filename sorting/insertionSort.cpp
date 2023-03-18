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

    // algo

    for (int i = 1; i < n; i++)
    {
        int temp = A[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (A[j] > temp)
            {
                A[j + 1] = A[j];
            }

            else
            {
                break;
            }
        }
        A[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}