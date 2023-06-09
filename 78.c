#include <stdio.h>

int main() {

  int i,j;
  for(j=1;j<=10;j++){
  printf("j: %d\n",j);

  for (i=1;i<=10;i++) {

    printf("%d * %d = %d\n",j,i,j*i);

  }
  printf("\n");
  }
  return 0;
}
