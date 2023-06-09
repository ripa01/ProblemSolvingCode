#include <stdio.h>

int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    int count=0;

 for(int i = 0;i<n;i++){

    scanf("%d %d %d", &a,&b,&c);

    if((a+b+c) >= 2)
		{
           count++;

		}
  }
 printf("%d\n",count);

	return 0;
}

