#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int maximum;
    int minimum;
    
    if (a >= b && a >= c)
    {
       maximum = a;
    } else if (b >= a && b >= c)
    {
        maximum = b;
    } else {
        maximum = c;
    }

    if (a <= b && a <= c)
    {
       minimum = a;
    } else if (b <= a && b <= c)
    {
        minimum = b;
    } else {
        minimum = c;
    }

    cout << minimum << " " << maximum << endl;



    
    
    


    
    return 0;
}