#include<stdio.h>

int main(){

int N[20];

for(int i=19;i>=0;i--)

        scanf("%d",&N[i]);

for(int i=0;i<=20;i++)

         printf("N[%d] = %d\n",i,N[i]);


return 0;
}

