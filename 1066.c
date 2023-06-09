#include<stdio.h>
int main(){
int i,n,s=0,m=0,j=0,k=0;



for(i=1; i<=5; i++){

   scanf("%d",&n);

   if((n%2)== 0){
   s= s+1;}

 if(n > 0){
     m= m+1;}

if(n < 0){
     j= j+1;}

 if ((n%2)!= 0){
      k= k+1;}
}
 printf("%d valor(es) par(es)\n",s);
 printf("%d valor(es) impar(es)\n",k);
  printf("%d valor(es) positivo(s)\n",m);
   printf("%d valor(es) negativo(s)\n",j);

return 0;

}
