#include <stdio.h>

int main()
{

    int n,p,c=0;
    scanf("%d",&n);

 for (int j = 0; j < n; j++){

         scanf("%d",&p);

    for (int i = 1; i <= p; i++) {

      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("%d eh primo\n",p);
  }
  else {
         printf("%d nao eh primo\n",p);
  }
 }
  return 0;
}
