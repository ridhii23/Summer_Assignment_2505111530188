//recursive reverse of a number
#include <stdio.h>

int rev(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    return rev(n / 10, reversed * 10 + (n % 10));
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int res = rev(num, 0);

    printf("Reversed number is: %d\n", res);

    return 0;
}
