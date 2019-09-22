//1) Program for Fibonacci Series of given input number, should work for any kind of input. 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n<0)
        printf("\nenter a valid input(n>=0)\n");
    else
    {
        printf("\nThe fibonacci series is : ");
        if(n==0)
            printf("0");
        else if(n==1)
            printf("0 1");
        else if(n>1)
        {
            printf("0 1 ");
            fibo(0,1,n);
        }
    }
    return 1;
}

void fibo(int n1,int n2,int n)
{
    int n3;
   n3=n1+n2;
   if(n3<=n)
   printf("%d ",n3);
   if(n3!=n&&n3<n)
    fibo(n2,n3,n);
   else
    return;
}
