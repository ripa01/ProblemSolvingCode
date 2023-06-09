#include<stdio.h>

int main(){
int N,i,sum=1;

scanf("%d",&N);

for(i=0; i< (N-1); i++){

  sum *= (N-i);

}

printf("%d\n",sum);


return 0;

}
