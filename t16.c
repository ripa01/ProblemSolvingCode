#include <stdio.h>
int main() {
  int n,a;

  scanf("%d %d", &n,&a);

  int i= n%a;
  int j = n/a;

  printf("%d %d %d\n",j,i,a);

  return 0;
}
