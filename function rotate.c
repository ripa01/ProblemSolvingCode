#include<stdio.h>


void left_rotate(int A[4][4]){

         int ai,aj,bi,bj,i,j;

     int B[4][4];

     for(ai=0; ai< 4; ai++){

    for (aj=0; aj< 4; aj++){
        bi = 3 -aj;
        bj = ai;
        B[bi][bj]= A[ai][aj];

    }
  }
     for(i=0; i< 4; i++){

    for (j=0; j< 4; j++){

    A[i][j] =  B[i][j] ;

    }
  }



    }

    int main(){



  int ai,aj,bi,bj,i,j;

  int A[4][4],B[4][4];

  for(ai=0; ai< 4; ai++){

    for (aj=0; aj< 4; aj++){

        scanf("%d",&A[ai][aj]);

    }
  }
 printf("AFTER ONE ROTATION\n");

 left_rotate(A);
 for(i=0; i< 4; i++){

    for (j=0; j< 4; j++){

   printf("%d ",A[i][j]);

    }

    printf("\n");
  }

  printf("AFTER TWO ROTATION\n");

 left_rotate(A);
 for(i=0; i< 4; i++){

    for (j=0; j< 4; j++){

   printf("%d ",A[i][j]);

    }

    printf("\n");
  }

    printf("AFTER THREE ROTATION\n");

 left_rotate(A);
 for(i=0; i< 4; i++){

    for (j=0; j< 4; j++){

   printf("%d ",A[i][j]);

    }

    printf("\n");
  }

 return 0;

}
