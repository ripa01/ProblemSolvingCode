#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){

int a=0,i,j,r,c;


for(i=0;i<5;++i){

  for(j=0;j<5;++j){

   scanf("%d",&a);


     if(a==1){
            r=abs(i-3);
            c=abs(j-3);
           printf("%d\n",r+c);
      }

    }
  }
return 0;
}

