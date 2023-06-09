
#include<stdio.h>

int main()
{
    int i,n;
	float x,y;
	float s=0;
		scanf("%d",&n);




	for(i=1;i <= n;i++){

   scanf("%f %f",&x,&y);
  s = x/y;
    if(y != 0){printf("%.1lf\n",s);}

    else printf("divisao impossivel\n");

}


	return 0;
}
