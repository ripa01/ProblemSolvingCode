#include<stdio.h>

int main(){
    while(1){
   int N;
   scanf("%d",&N);

   if(N==0){
    break;
   }
   int j,i;



   for(i=0 ; i<N; i++){
      for(j=0 ; j<N-1; j++){
         printf("%3d ",abs(i-j)+1);

      }

      printf("%3d",abs(i-j)+1);
       printf("\n");
}

 printf("\n");

    }

   }






