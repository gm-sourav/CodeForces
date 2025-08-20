#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0; // Use long long to avoid overflow for large sums
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        sum += abs(num); // Add absolute value of each number
    }

    printf("%lld\n", sum);

    return 0;
}
