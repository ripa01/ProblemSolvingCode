#include <stdio.h>

int main(){

int i,m;
float p,q,sum=0;


    scanf("%d",&m);

for(i=1; i<=m; i++){

  scanf("%f %f",&p,&q);

   if(p==1001){
      sum = sum + (1.50*q);
   }
    else if(p==1002){
      sum = sum + (2.50*q);
   }

   else if(p==1003){
      sum = sum + (3.50*q);
   }
  else if(p==1004){
      sum = sum + (4.50*q);
   }

  else if(p==1005){
      sum = sum + (5.50*q);
   }

}

printf("%.2f\n",sum);


return 0;

}
