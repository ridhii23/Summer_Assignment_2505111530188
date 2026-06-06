//code to calculate sum of first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0 ;
    printf("provide a number n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
       }
       printf("sum of first %d natural numbers is %d",n,sum);
       return 0;
}