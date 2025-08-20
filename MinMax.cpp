#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int min = A[0];
    int minInd = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            minInd = i;
        }
    }
    int max = A[0];
    int maxInd = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            maxInd = i;
        }
    }

    int temp = A[minInd];
    A[minInd] = A[maxInd];
    A[maxInd] = temp;

    for (int i = 0; i < n; i++)
    {

        cout << A[i] << " ";
    }
}