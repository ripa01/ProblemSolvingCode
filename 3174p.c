#include <stdio.h>
#include <string.h>

int main(){

int i,n,m,sum=0,p=0,q=0,r=0,s=0;

char c1[100],c2[100];

    scanf("%d",&m);

for(i=1; i<=m; i++){

  scanf("%s %s %d",&c1,&c2,&n);

   if(strcmp(c2,"bonecos")==0){
        p=p+n;

   }

   else if(strcmp(c2,"arquitetos")==0){
      q=q+n;

   }

   else if(strcmp(c2,"musicos")==0){
      r=r+n;

   }

  else if(strcmp(c2,"desenhistas")==0){
      s=s+n;
   }

}
 sum = ((p/8)+(q/4)+(r/6)+(s/12));

printf("%d\n",sum);


return 0;

}

