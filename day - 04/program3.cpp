//code to check armstrong number
#include <stdio.h>

int main() {
    int num, originalnum, rem, res = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalnum = num;


    while (originalnum != 0) {
        rem = originalnum % 10;
        
      
        res += rem * rem * rem;
        
        originalnum /= 10;
    }

    if (res == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
