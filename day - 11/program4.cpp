//code to write function to find factorial
#include <stdio.h>
int Fact(int num) {
   int factorial = 1;
    if (num < 0) {
        return -1; 
    }

    for (int i = 1; i <= num; i++) {
        factorial *= i; 
    }

    return factorial;
}

int main() {
    int n;
    long long result;
  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = Fact(n);

    if (result == -1) {
        printf("Factorial doesn't exist");
    } else {
        printf("Factorial of %d is: %d", n, result);
    }

    return 0;
}
