// Given an unsorted integer array, find the first missing positive integer. 
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
            if(b[a[i]]>1)
                break;
        }
    }


    for(i=1;i<=max;i++)
    {
        if(b[i]<1)
        {
            printf("\nThe first missing element is %d",i);
            break;
        }
    }
    return 1;
}
