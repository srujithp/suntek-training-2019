// Give a N*N square matrix, return an array of its diagonals 
#include<stdio.h>

int main()
{
    int i,j,k=0,l=0,r,c;
    char a[100][100],b[100],d[100];
    printf("enter the rows of matrix : ");
    scanf("%d",&r);
    printf("\nenter the columns of matrix :");
     scanf("%d",&c);
     printf("\nenter the values in matrix :\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
           if(i==j)
           {
               b[k]=a[i][j];
               k++;
           }
           else if(i+j==r-1)
           {
               d[l]=a[i][j];
               l++;
           }
       }
    }

    printf("\nThe diagnols elements of matrix are :\n");
    for(i=0;b[i]!='\0';i++)
        printf("%d ",b[i]);

    for(i=0;d[i]!='\0';i++)
        printf("%d ",d[i]);
    return 1;
}


