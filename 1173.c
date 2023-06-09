#include<stdio.h>

int main(){

int n,X[10];

 scanf("%d",&n);

for(int i=0;i<10;i++){

      X[i]=n;

      printf("X[%d] = %d\n",i,n);

    n += n;

}
return 0;
}

