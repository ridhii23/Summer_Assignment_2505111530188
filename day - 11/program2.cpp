//code to write function to find maximum
#include<stdio.h>
int max(int num1, int num2){
    if (num1>num2){
        return num1;
    }
    else {
        return num2;
    }
}

int main(){
    int a,b,maximum;
    printf("enter two integers");
    scanf("%d%d", &a, &b);
 
     maximum = max(a,b);

    printf("the maximum number is %d", maximum);
    return 0;
}