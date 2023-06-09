#include<stdio.h>
int main(){
int n,i,j,sum=0,a,b,temp;
 while(scanf("%d",&n)==1){
for(i=1;i <= n;i++) {
   scanf("%d\n%d",&a,&b);

 if(a>b){temp=b;b=a;a=temp;}
  if((a*a)%a == 0)a++;


for(j=a ; j <= b; j= j+2){
    sum += j;
}
printf("Case %d: %d\n",i,sum);
sum=0;

 }
 }
return 0;
}
