//code to find sum and average of array
#include <stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    {
        for(i=0; i<n; i++)
        {
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
    }
    for(i=0; i<n ; i++)
    {
        sum+=a[i];
    }
    float average = (float)sum/n;
    printf("The sum of the elements in the array is: %d",sum);
    printf("The average of the elements in the array is: %f",average);
    return 0;
}
