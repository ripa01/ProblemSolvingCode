#include<stdio.h>
int main(){
int i,n,sum=0;


do{

scanf("%d",&n);

for(i=1; i<n; i++){

 if((n%i)== 0){
  sum += i;
}

}
printf("PERFECTION OUTPUT\n");
if(sum<n){printf("%d DEFICIENT\n",n);}

if(sum==n && sum != 0){printf("%d PERFECT\n",n);}

if(sum>n){printf("%d ABUNDANT\n",n);}
sum =0;

}while(n != 0);

printf("END OF OUTPUT\n");

return 0;
}
