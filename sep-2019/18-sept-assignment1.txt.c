// Iterative C program to compute modular exponention
#include <stdio.h>

int main()
{
    int x,p;
    unsigned int y;
    printf("The expression is of the form (x^y) %% p\n");
    printf("enter the values of x,y and p : ");
    scanf("%d %d %d",&x,&y,&p);
    int res = 1;

	while (y > 0)
	{

		if (y & 1)
			res = (res*x) ;

		y = y>>1;
		x = (x*x) ;
	}

    printf("\nthe value is %u",res%p);

    return 0;
}
