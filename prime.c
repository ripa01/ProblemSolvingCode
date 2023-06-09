#include <stdio.h>

int main() {
   unsigned long long int m, n, i, cnt;
   scanf("%llu",&n);
    for(int i=1;i<=n;i++){
   scanf("%llu %llu", &m, &n);

   while (m <= n) {
    cnt = 0;

      if (m <= 1) {
         ++m;
         continue;
      }


      for (i = 2; i <= sqrt(m); ++i) {

         if (m % i == 0) {
            cnt = 1;
            break;
         }
      }

      if (cnt == 0)
         printf("%d\n", m);
      ++m;
   }
}
   return 0;
}
