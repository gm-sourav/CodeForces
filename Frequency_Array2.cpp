#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
    int fre[m + 1] = {0};
    for (int  i = 0; i < n; i++)
    {
        int val = arr[i];
        fre[val]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << fre[i] << endl;
    }
    
    
}