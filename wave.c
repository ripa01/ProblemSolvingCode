#include <stdio.h>

int main() {
 int p, n, m, i, j, k, Case = 0;
 scanf("%d", &p);
 while(p--) {

  scanf("%d %d", &n, &m);
  if(++Case > 1) puts("");
  for(i = 0; i < m; i++) {
   for(j = -n+1; j < n; j++) {
    for(k = n-abs(j); k > 0; k--)
     printf("%d", n-abs(j));
    puts("");
   }
   if(i != m-1) puts("");
  }
 }
    return 0;
}
