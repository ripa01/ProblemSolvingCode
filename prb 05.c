#include<stdio.h>
int main(){

{


	int j,i,n;

		scanf("%d",&n);

 if(n <= 26)

    {
        for(i=1; i<=n; i++){

      for(j=1 ; j <= i; j++){

      printf("%c", 'A' + j-1 );

      }

       printf("\n");
   }

 }


  return 0;
}
}
