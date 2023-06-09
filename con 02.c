
#include <stdio.h>

int main() {
  long long int t,i;
  scanf("%d",&t);

    if(t%2 == 0)
        i = t/2;
  else i = ((t + 1) / 2) * (-1);

 printf("%d\n",i);

  return 0;
}
