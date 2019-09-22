//You are given a read only array of n integers from 1 to n. Each integer appears exactly once except A which appears twice and B which is missing. Return A and B. 
#include<stdio.h>
static int b[100];
int main()
{
    int n,a[100],i,max=0;
    printf("enter the no of values : ");
    scanf("%d",&n);
    printf("\nenter the values :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=0)
            continue;
        else
        {
            if(max<a[i])
                max=a[i];
            b[a[i]]=b[a[i]]+1;

        }
    }


    for(i=1;i<=max;i++)
    {
        if(b[i]>1)
            printf("\nThe repetative element is %d",i);
        else if(b[i]<1)
            printf("\nThe missing element is %d",i);
    }
    return 1;
}

