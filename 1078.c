#include<stdio.h>

int main()
{
	int x,i,n,sum=0;
		scanf("%d",&n);


	for(i=1; i <= 10;i++)
        {
     sum= n*i;
    printf("%d x %d = %d\n",i,n,sum);
	}
	return 0;
}


