#include<stdio.h>

int main(){

  int ai,aj,bi,bj;

  int A[4][4],B[4][4];

  for(ai=0; ai< 4; ai++){

    for (aj=0; aj< 4; aj++){

        scanf("%d",&A[ai][aj]);

    }
  }
  printf("\n");

   for(ai=0; ai< 4; ai++){

    for (aj=0; aj< 4; aj++){
        bi = 3 -aj;
        bj = ai;
        B[bi][bj]= A[ai][aj];

    }
  }

  for(bi=0; bi< 4; bi++){

    for (bj=0; bj< 4; bj++) {
       printf("%d ",B[bi][bj]);

    }
    printf("\n");

  }

 return 0;

}
