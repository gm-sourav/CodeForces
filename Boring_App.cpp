#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char x[10];
        scanf("%s", x);
        
        int d = x[0] - '0';  
        int len = strlen(x);  
        
        int result = (d - 1) * 10 + (len * (len + 1)) / 2;
        printf("%d\n", result);
    }
    return 0;
}
