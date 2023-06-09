#include <stdio.h>
#include <string.h>

int main(){

int i,n,s,m,sum=0;

char c1[100],c2[100];

    scanf("%d",&m);

for(i=1; i<=m; i++){

  scanf("%s %s %d",&c1,&c2,&n);

   if(strcmp(c2,"bonecos")==0){
      s =  n/8;
        sum= sum+s;
   }

   else if(strcmp(c2,"arquitetos")==0){
      s =  n/4;
        sum= sum+s;

   }

   else if(strcmp(c2,"musicos")==0){

      s =  n/6;
        sum= sum+s;

   }

  else if(strcmp(c2,"desenhistas")==0){
      s =  n/12;
        sum= sum+s;
   }

}

printf("%d\n",sum);


return 0;

}

