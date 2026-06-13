//code to find x^n without pow()
#include <stdio.h>

int main() {
    int x, n;
   int res = 1; 

    printf("Enter base value : ");
    scanf("%d", &x);
    printf("Enter exponent value : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        res = res*x;
    }

    printf("%d^%d = %d\n", x,n,res);

    return 0;
}
