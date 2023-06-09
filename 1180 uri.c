#include<stdio.h>

int main(){
   int N;
   scanf("%d",&N);
   int X[N],min,pos,i;


   scanf("%d",&X[0]);
   min = X[0];
   pos = 0;

   for(i=1 ; i<N; i++){

    scanf("%d",&X[i]);

if(X[i] < min){

    min = X[i];
    pos = i;
}

   }

   printf("Menor valor: %d\n", min);
  printf("Posicao: %d", pos);


}
