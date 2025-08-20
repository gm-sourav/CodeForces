#include <stdio.h>
int main()
{

    long long  n;
    long long sum = 0;
    scanf("%lld", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    if (sum < 0)
    {
        sum = -sum;
    }

    printf("%d", sum);

    return 0;
}