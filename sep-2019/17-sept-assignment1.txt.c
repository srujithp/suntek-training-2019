//power using recursion
#include<stdio.h>
long int power(int x,int n);
int main()
{
    int x,n;
    long int p;
    printf("enter the number x and n to find nth power of x : ");
    scanf("%d %d",&x,&n);
    if(n<0)
        printf("1/%d",power(x,-n));
    else
    {
        p=power(x,n);
    printf("%d",p);
    }
    return 1;
}

long int power(int x,int n)
{

    if(n==0)
        return 1;
    return(x*power(x,n-1));

}

