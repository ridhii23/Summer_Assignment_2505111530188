//code to check whether a number is prime
#include <stdio.h>

int main() {
    int n,k,flag=0,r;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (k=2;k<=n/2 && flag==0; k++)
    {r=n%k;
        if (r==0)
        flag=1;
    }
   if (flag==0)
   printf("%d is a prime number", n);
else 
printf("%d is not a prime number", n);
   
    return 0;
}
