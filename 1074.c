#include<stdio.h>
int main(){
int i,n,p;
scanf("%d",&p);


for(i=1; i<=p; i++){

scanf("%d",&n);

   if((n%2)== 0 && n>0){
   printf("EVEN POSITIVE\n");}

 if(n>0 && (n%2)!=0){
         printf("ODD POSITIVE\n");
   }

if(n<0 && (n%2)==0){
         printf("EVEN NEGATIVE\n");
    }

 if ((n%2)!= 0 && n<0){
      printf("ODD NEGATIVE\n");
      }

    if(n==0){

        printf("NULL\n");
    }
}

return 0;

}
