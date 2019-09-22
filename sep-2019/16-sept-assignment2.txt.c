//factorial using iteration
//Program for factorial of given number , should work for any kind of input.  
 
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter the number to find its factorial : ");
    scanf("%d",&n);
    if(n<0)
        printf("enter a valid number");
    else if(n==0)
        printf("1");
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    printf("%d",fact);
    }
    return 1;
}
