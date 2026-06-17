//code for intersenction of arrays.
#include <stdio.h>
int main()
{
    int n,m,i,j,a[100],b[100];
    printf("Enter the size of the first array :");
    scanf("%d",&n);
    printf("Enter the elements of the first array :\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array :");
    scanf("%d",&m);
    printf("Enter the elements of the second array:\n");
    for(j=0;j<m;j++)
    {
        printf("b[%d]=",j);
        scanf("%d",&b[j]);
    }
    printf("Intersection :");
for(i = 0; i < n; i++) 
{
    int already_printed = 0;
    for(int k = 0; k < i; k++) {
        if(a[i] == a[k]) {
            already_printed = 1;
            break;
        }
    }
    if(already_printed) continue;

    for(j = 0; j < m; j++) 
    {
        if(a[i] == b[j]) 
        {
            printf(" %d ", a[i]);
            break; 
        }
    }
}
}
