#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string num;
    cin >> n >> num;
    
    long long sum = 0;
    for (char c : num)
    {
        sum += c - '0';  
    }
    cout << sum << "\n";
}
