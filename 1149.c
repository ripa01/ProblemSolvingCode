#include<stdio.h>

int main(){
int N,A,i,sum=0;

scanf("%d %d",&A,&N);

while(N<=0)scanf("%d",&N);

   for(i=1; i<=N; i++){

  sum += A;
 A++;

 }
printf("%d\n",sum);



return 0;

}
