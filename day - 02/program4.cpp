//code to check whether a number is palindrome.
#include<stdio.h>
int main(){
  int n,original,rev=0,rem ;
    printf("enter a number : ");
    scanf("%d",&n);
    original=n;

    while(n!=0){
      rem = n%10;
      rev = rev*10 + rem;
      n/=10;
    }

    if (original == rev)
      printf("the given number is palindrome");
    else
      printf("the number is not palindrome");

   return 0;
}
