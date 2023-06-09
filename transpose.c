#include<stdio.h>

int main(){

  int ai,aj,bi,bj;

  int A[3][3],B[3][3];

  for(ai=0; ai< 3; ai++){

    for (aj=0; aj< 3; aj++){

        scanf("%d",&A[ai][aj]);

    }
  }
 for(ai=0; ai< 3; ai++){

    for (aj=0; aj< 3; aj++){

        B[aj][ai]=A[ai][aj];

    }
  }

   for(ai=0; ai< 3; ai++){

    for (aj=0; aj< 3; aj++) {

       printf("%d ",B[aj][ai]);

    }
    printf("\n");

  }

 return 0;

}
