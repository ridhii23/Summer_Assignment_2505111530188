#include <stdio.h>

int main() {
    int n, a = 0, b = 1, newterm;

    printf("enter the last term of series: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    newterm = a + b;

    while (newterm <= n) {
        printf("%d ", newterm);
        a = b;
        b = newterm;
        newterm = a + b;
    }

    return 0;
}