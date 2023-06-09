
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    long long int k,sum=0;
    scanf("%d",&k);
    sum = (k*(k-1))/2;
    printf("%d\n",sum);
  }
  return 0;
}
