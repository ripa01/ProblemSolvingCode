#include <stdio.h>

int main()
{

    int n,m;
    scanf("%d %d", &n ,&m);
    int count = 1;

 for(int i=0;i<10;i++){

        n = n*3;
        m = m*2;
        if(n<=m){

           count++;
     }
        i++;

 }
       printf("%d",count);

	return 0;
}
