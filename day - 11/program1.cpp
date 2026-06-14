//code to write function to find sum of two numbers
#include <stdio.h>

int fun(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a,b,result;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);

   
    result = fun(a,b);

    printf("The sum of integers is : %d ", result);

    return 0;
}
