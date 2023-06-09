#include<stdio.h>

int main(){

int a,i=0,j=0,k=0;


while(1){
        scanf("%d",&a);

    if(a==4){

    break;
    }
   if(a==1){

   i++;
   }

   if(a==2){
   j++;
   }
   if(a==3){
   k++;
   }

}
 printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i);
    printf("Gasolina: %d\n",j);
    printf("Diesel: %d\n",k);

return 0;

}
