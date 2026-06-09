//code to find prduct of digits
#include<stdio.h>
int main()
{
    int n,p=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        p=p*(n%10);
        n=n/10;
    }
    printf("Product of digits is %d",p);
    return 0;
}
