#include<stdio.h>

int main()
{
	int x,i,n,sum=0;
		scanf("%d",&x);
		if(x%2 != 0){x++;n=x;}
else{n=x;}
	for(i=2; i <= n;i+=2){
     sum=i*i;
    printf("%d^2 = %d\n",i,sum);
	}
	return 0;
}

