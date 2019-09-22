//power using iteration
#include<stdio.h>

int main()
{
    int x,n,i;
    long int p=1;
    printf("enter the number x and n to find nth power of x : ");
    scanf("%d %d",&x,&n);
    if(n<0)
    {
        n=-n;
        for(i=1;i<=n;i++)
        {
            p=p*x;
        }
        printf("1/%d",p);
    }
    else
    {
         for(i=1;i<=n;i++)
        {
            p=p*x;
        }
        printf("%d",p);
    }
    return 1;
}


