//power using recursion
#include<stdio.h>
long int power(int x,int n);
int main()
{
    int x,n,m;
    long int p;
    printf("enter the number x,n and m to find nth power of x mod m: ");
    scanf("%d %d %d",&x,&n,&m);
    if(n<0)
        printf("%d",m);
    else
    {
        p=power(x,n);
    printf("%d",p%m);
    }
    return 1;
}

long int power(int x,int n)
{

    if(n==0)
        return 1;
    return(x*power(x,n-1));

}

