#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *b = &x;

    cout << *b << endl;
    cout << ++*b << endl;
    cout << *++b;

    int x = 5;
    int *p = &x;
    (*p)++;
    cout << x;



    
    return 0;
}