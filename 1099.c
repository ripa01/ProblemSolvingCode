#include<stdio.h>
int main(){
int x,y,j,i,sum=0,temp,a,n;
scanf("%d",&a);
for(i=0;i < a;i++) {
   scanf("%d %d",&x,&y);
   if(x>y){temp=y;y=x;x=temp;}
if(x%2 == 0)x--;
x=x+2;

for(j=x ; j < y; j+=2){
    sum += j;
}
printf("%d\n",sum);
sum = 0;

 }




	return 0;
}

