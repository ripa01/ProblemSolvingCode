#include <stdio.h>

int main()
{
    int sum=0,h,n,p;
    scanf("%d %d",&n,&h);

 for (int j = 0; j < n; j++){

         scanf("%d", &p);

        if(p<=h){

           sum = sum+1;
        }

        else{

            sum= sum+2;
        }



 }

    printf("%d\n",sum);
	return 0;
}
