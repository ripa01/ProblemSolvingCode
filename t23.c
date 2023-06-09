#include <stdio.h>
int main() {
  int n,a;

  scanf("%d", &n);

for (int i = 1; i <= n; i++) {

    scanf("%d",&a);

long long int sum=0;

 int  j = 1;

    while (j <= a)
    {
       sum += 2 * j - 1;
        j++;
    }

    printf("Case %d: %lld\n",i,sum);

}

}
