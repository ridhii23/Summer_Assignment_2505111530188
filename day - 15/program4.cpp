//code to move zeroes to end 
#include <stdio.h>
int main ()
{
    int n, i, j, a[100];
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
    }
    while(j<n)
    {
        a[j]=0;
        j++;
    }
    printf("the new array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
