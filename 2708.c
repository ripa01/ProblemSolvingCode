
#include <stdio.h>
#include <string.h>

int main(){

int i,n,m,sum=0,p=0,q=0,r=0;

char c2[100];

while( scanf("%s",&c2) && c2[0]!='A'){

  scanf("%d",&n);


   if(strcmp(c2,"SALIDA")==0){
        p=p+n;
        r=r+1;
   }

   else if(strcmp(c2,"VUELTA")==0){
      q=q+n;
      r =r-1;

   }

}
 sum = p-q;

printf("%d\n",sum);
printf("%d\n",r);


return 0;

}
