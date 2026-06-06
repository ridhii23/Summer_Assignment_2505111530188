//code to find the factorial of a given number
#include<stdio.h>
int main()
{
    int i,n,factorial=1 ;
    printf("provide a number n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
       }
       printf("factorial of %d is %d",n,factorial);
       return 0;
}