#include<stdio.h>

int main(){
 int N,i,a=1,b=1,c=1,j;

scanf("%d",&N);

 for(i=1;i<=N;i++){

     a++;
      a=i;
    b = a * i;
    c = b * i;
printf("%d %d %d\n",a,b,c);
    }




return 0;
}
