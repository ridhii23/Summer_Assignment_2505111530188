//code to write function for palindrome 
#include <stdio.h>

int isPalindrome(int num) {
    int ogNum = num;
    int reversed = 0;
    int rem;

    if (num < 0) {
        return 0;
    }

    while (num > 0) {
        rem = num % 10;
        reversed = (reversed * 10) + rem;
        num = num / 10;
    }

    if (ogNum == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}
