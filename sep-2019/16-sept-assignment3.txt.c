//factorial using recursion
//Program for factorial of given number , should work for any kind of input.  
 
#include<stdio.h>
long int factorial(int n);
int main()
{
    int n;
    long int f;
    printf("enter the number to find its factorial : ");
    scanf("%d",&n);
    if(n<0)
        printf("enter a valid number");
    else if(n==0)
        printf("1");
    else
    {
        f=factorial(n);
    printf("%d",f);
    }
    return 1;
}

long int factorial(int n)
{

    if(n==1)
        return 1;
    return(n*factorial(n-1));

}
