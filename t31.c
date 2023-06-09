#include <stdio.h>
#include <math.h>

int main() {

  long long int n, i, flag = 0,a,p;
  scanf("%lld",&p);
  for (int j =0 ; j< p ; j++){
  scanf("%lld", &a);

   n = sqrt(a);
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }


  if (flag == 0)
    printf("Yes\n");
  else
    printf("No\n");
  }
  return 0;
}

