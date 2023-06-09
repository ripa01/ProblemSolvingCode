#include <stdio.h>
int main()
{
  int m, n, c, d, matrix[100][100], maximum,count = 0;

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of the matrix\n");

  for (c = 0; c < m; c++)
    for(d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);


  maximum = matrix[0][0];

  for (c = 0; c < m; c++){
    for (d = 0; d < n; d++){

      if (matrix[c][d] > maximum){
         maximum = matrix[c][d];

         if(matrix[c][d] == maximum ){
            count= count+1;
      }
}
    }
  }


  printf("Global Maximum appears %d times\n", count);

  return 0;
}
